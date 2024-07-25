/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */

import java.util.Scanner;

public class EuclideanAlgorithm {
    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scannerM24W0272 = new Scanner(System.in);
        // Prompt the user to enter two positive integers
        System.out.print("Enter the first positive integer: ");
        int a = scannerM24W0272.nextInt();
        System.out.print("Enter the second positive integer: ");
        int b = scannerM24W0272.nextInt();
        // Ensure both inputs are positive
        if (a <= 0 || b <= 0) {
            System.out.println("Both numbers must be positive. Please try again.");
            //return;
        }
        // Perform Euclidean algorithm using a do-while loop
        int remainderM24W0272;
        do {
            remainderM24W0272 = a % b;
            a = b;
            b = remainderM24W0272;
        } while (remainderM24W0272 != 0);
        // Print the greatest common divisor (GCD)
        if (a >= 0 && b >= 0) {
        System.out.println("The greatest common divisor (GCD) of the two numbers is: " + a);            
        }
        // Close the scanner
        scannerM24W0272.close();
    }
}
