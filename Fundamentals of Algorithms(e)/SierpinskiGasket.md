//Gaire Ananta Prasad (M24W0272). I am writing this detailed pseudocode in text editor because it is too large to write in copy.
CLASS SierpinskiGasket EXTENDS JPanel
    DECLARE len AS float INITIALIZED TO 1000
    DECLARE maxLevel AS int INITIALIZED TO 1

    // Constructor
    CONSTRUCTOR SierpinskiGasket() 
        ADD MouseMotionListener
            METHOD mouseMoved(e: MouseEvent)
                SET maxLevel TO (int) map(e.getX(), 0, getWidth(), 1, 10)
                CALL repaint()

    // Main method
    STATIC METHOD main(args: String[])
        DECLARE frame AS JFrame INITIALIZED TO new JFrame()
        DECLARE panel AS SierpinskiGasket INITIALIZED TO new SierpinskiGasket()
        CALL frame.add(panel)
        CALL frame.setSize(1080, 1080)
        CALL frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE)
        CALL frame.setVisible(true)

    // Override paintComponent method
    OVERRIDE METHOD paintComponent(g: Graphics)
        CALL super.paintComponent(g)
        DECLARE g2d AS Graphics2D INITIALIZED TO (Graphics2D) g
        CALL g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON)
        CALL g2d.setColor(Color.WHITE)
        CALL g2d.fillRect(0, 0, getWidth(), getHeight())
        CALL g2d.setColor(Color.BLACK)
        CALL divide(g2d, getWidth() / 2 - len / 2, getHeight() / 2 + Math.sin(Math.PI / 3) * len / 2, len, 1, maxLevel)

    // Recursive divide method
    METHOD divide(g: Graphics2D, x: double, y: double, l: double, lvl: int, max: int)
        IF lvl == max THEN
            CALL tri(g, x, y, l)
        ELSE
            DECLARE midpoint1 AS Point INITIALIZED TO calculateMidpoint(new Point((int)x, (int)y), new Point((int)(x + l / 2), (int)y))
            DECLARE midpoint2 AS Point INITIALIZED TO calculateMidpoint(new Point((int)(x + l / 2), (int)y), new Point((int)(x + l), (int)y))
            DECLARE midpoint3 AS Point INITIALIZED TO calculateMidpoint(new Point((int)(x + l), (int)y), new Point((int)x, (int)(y - Math.sin(Math.PI / 3) * l)))
            CALL divide(g, x, y, l / 2, lvl + 1, max)
            CALL divide(g, x + l / 2, y, l / 2, lvl + 1, max)
            CALL divide(g, x + l / 4, y - Math.sin(Math.PI / 3) * l / 2, l / 2, lvl + 1, max)

    // Method to draw triangle
    METHOD tri(g: Graphics2D, x: double, y: double, l: double)
        DECLARE xPoints AS int[] INITIALIZED TO {(int) x, (int) (x + l / 2), (int) (x + l)}
        DECLARE yPoints AS int[] INITIALIZED TO {(int) y, (int) (y - Math.sin(Math.PI / 3) * l), (int) y}
        CALL g.fillPolygon(xPoints, yPoints, 3)

    // Method to calculate midpoint
    METHOD calculateMidpoint(p1: Point, p2: Point) RETURNS Point
        RETURN new Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2)

    // Method to map value from one range to another
    METHOD map(value: float, start1: float, stop1: float, start2: float, stop2: float) RETURNS float
        RETURN start2 + (stop2 - start2) * ((value - start1) / (stop1 - start1))
