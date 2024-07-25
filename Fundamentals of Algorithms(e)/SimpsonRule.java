/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */

import java.util.Scanner;

public class SimpsonRule {

    // Example function f(x) = x^2
    public static double simpsonsRuleM24w0272(double x) {
        return x * x;
    }

    // Simpson's Rule implementation
    public static double integrate(double a, double b, int n) {
        // Check if n is odd
        if (n % 2 != 0) {
            n++;
        }
        
        // Calculate step size
        double h = (b - a) / n;
        
        // Initialize sum
        double integral = simpsonsRuleM24w0272(a) + simpsonsRuleM24w0272(b);
        
        // Loop over intervals
        for (int i = 1; i < n; i++) {
            double x = a + i * h;
            if (i % 2 == 0) {
                integral += 2 * simpsonsRuleM24w0272(x);
            } else {
                integral += 4 * simpsonsRuleM24w0272(x);
            }
        }
        
        // Finalize the integral calculation
        integral *= h / 3.0;
        
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
