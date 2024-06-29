/**
 * Newton's Method to find the root of the equation f(x) = 0
 * Author: GAIRE ANANTA PRASAD
 * Student ID: M24W0272
 */

 public class newtonsMethod {

    public static double f(double x) {
        return x * x * x - x - 2; // Example function: x^3 - x - 2
    }

    // Derivative of the function
    public static double df(double x) {
        return 3 * x * x - 1; // Derivative of the example function: 3x^2 - 1
    }

    // Newton's Method implementation
    public static double newton(double x0, double tolerance, int maxIterations) {
        double x = x0; // Initial guess
        int iter = 0; // Initialize iteration counter

        // Loop until the function value is sufficiently small or max iterations are reached
        while (Math.abs(f(x)) > tolerance && iter < maxIterations) {
            x = x - f(x) / df(x); // Update x using Newton's formula
            iter++; // Increment iteration counter
        }

        return x; // Return the approximated root
    }

    public static void main(String[] args) {
        double x0 = 1.5; // Initial guess
        double tolerance = 1e-6; // Tolerance for convergence
        int maxIterations = 100; // Maximum number of iterations

        double root = newton(x0, tolerance, maxIterations);
        System.out.println("Root: " + root); // Print the root
    }
}
