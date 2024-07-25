/**
 * Bisection Method to find the root of the equation f(x) = 0
 * Author: GAIRE ANANTA PRASAD
 * Student ID: M24W0272
 */

 public class bisectionMethod {

    public static double f(double x) {
        return x * x * x - x - 2; // Example function: x^3 - x - 2
    }

    // Bisection Method implementation
    public static double bisection(double a, double b, double tolerance, int maxIterations) {
        // Check if the function changes sign over the interval
        if (f(a) * f(b) >= 0) {
            System.out.println("The function does not change sign over the interval.");
            return Double.NaN; // Return NaN if there's no root in the interval
        }

        double c = a; // Initialize c
        int iter = 0; // Initialize iteration counter

        // Loop until the interval is sufficiently small or max iterations are reached
        while ((b - a) / 2.0 > tolerance && iter < maxIterations) {
            c = (a + b) / 2.0; // Compute midpoint

            // Check if the midpoint is a root
            if (f(c) == 0.0) {
                break; // Break if root is found
            }

            // Decide the side to repeat the steps
            if (f(c) * f(a) < 0) {
                b = c; // Root is in the left half
            } else {
                a = c; // Root is in the right half
            }

            iter++; // Increment iteration counter
        }

        return c; // Return the midpoint as the root
    }

    public static void main(String[] args) {
        double a = 1; // Initial interval lower bound
        double b = 2; // Initial interval upper bound
        double tolerance = 1e-6; // Tolerance for convergence
        int maxIterations = 100; // Maximum number of iterations

        double root = bisection(a, b, tolerance, maxIterations);
        System.out.println("Root: " + root); // Print the root
    }
}
