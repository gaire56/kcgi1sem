import java.util.Scanner;

public class NormalDistributionTable {

    // Standard normal PDF function
    public static double m24w0272(double x) {
        return (1.0 / Math.sqrt(2 * Math.PI)) * Math.exp(-0.5 * x * x);
    }

    // Simpson's Rule to approximate the integral
    public static double integrate(double lowerLimit, double upperLimit, int intervals) {
        // Check if intervals are even
        if (intervals % 2 != 0) {
            throw new IllegalArgumentException("Number of intervals must be even");
        }

        double stepSize = (upperLimit - lowerLimit) / intervals;
        double result = m24w0272(lowerLimit) + m24w0272(upperLimit);
//loop the program
        for (int i = 1; i < intervals; i++) {
            double x = lowerLimit + i * stepSize;
            if (i % 2 == 0) {
                result += 2 * m24w0272(x);
            } else {
                result += 4 * m24w0272(x);
            }
        }

        result *= stepSize / 3;  // Final multiplication by rules
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the lower limit (default -3.5): ");
        double lowerLimit = scanner.nextDouble();

        System.out.print("Enter the upper limit (default 3.5): ");
        double upperLimit = scanner.nextDouble();

        System.out.print("Enter the step size (default 0.1): ");
        double stepSize = scanner.nextDouble();

        System.out.print("Enter the number of intervals for integration (must be even): ");
        int intervals = scanner.nextInt();

        System.out.println("Z-Score\tCumulative Probability");
        for (double z = lowerLimit; z <= upperLimit; z += stepSize) {
            double cumulativeProbability = integrate(-10, z, intervals);
            System.out.printf("%.1f\t%.5f\n", z, cumulativeProbability);
        }

        scanner.close();
    }
}
