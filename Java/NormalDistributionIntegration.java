/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */

import java.util.Scanner;

public class NormalDistributionIntegration {

    // Standard normal PDF function
    public static double m24w0272(double x) {
        return (1.0 / Math.sqrt(2 * Math.PI)) * Math.exp(-0.5 * x * x);
    }

    // Integration using given bounds and steps
    public static double integrate(double a, double b, int n) {
        // Calculate step size
        double h = (b - a) / n;
        
        // Initialize sum
        double integral = 0;
        
        // Loop over intervals
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            integral += m24w0272(x) * h;
        }
        
        return integral;
    }

   public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the lower limit (a): ");
        double a = scanner.nextDouble();

        System.out.print("Enter the upper limit (b): ");
        double b = scanner.nextDouble();

        System.out.print("Enter the number of intervals (must be even): ");
        int n = scanner.nextInt();

        double result = integrate(a, b, n);
        System.out.println("Integral result: " + result);

        scanner.close();
    }
}
