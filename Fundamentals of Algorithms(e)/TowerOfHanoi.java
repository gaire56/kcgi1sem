//Gaire Ananta Prasad (M24W0272)
public class TowerOfHanoi {

    /**
     * Recursive function to solve the Tower of Hanoi puzzle 
     * @param n       Number of disks
     * @param fromRod The source rod
     * @param toRod   The destination rod
     * @param auxRod  The auxiliary rod
     */
    static void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
        // Base case: If there are no disks to move, return
        if (n == 0) {
            return;
        }        
        // Step 1: Move n-1 disks from fromRod to auxRod using toRod as auxiliary
        towerOfHanoi(n - 1, fromRod, auxRod, toRod);        
        // Step 2: Move the nth disk from fromRod to toRod
        System.out.println("Move disk " + n + " from rod " + fromRod + " to rod " + toRod);        
        // Step 3: Move the n-1 disks from auxRod to toRod using fromRod as auxiliary
        towerOfHanoi(n - 1, auxRod, toRod, fromRod);
    }

    public static void main(String[] args) {
        int n = 5; // Number of disks
        
        // Print initial message
        System.out.println("Solving Tower of Hanoi for " + n + " disks:");
        
        // Call the recursive function to solve the puzzle
        towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of the rods
        
        // Print final message
        System.out.println("Tower of Hanoi solved for " + n + " disks.");
    }
}
