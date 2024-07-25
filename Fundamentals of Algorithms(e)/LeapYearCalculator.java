/*
 * StudentID:M24W0272
 * StudentName: GAIRE ANANTA PRASAD
 */

import java.util.Scanner;
public class LeapYearCalculator {
    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scM24W0272 = new Scanner(System.in);

        // Prompt the user to enter the year
        System.out.print("Enter the year: ");
        int yearM24W0272 = scM24W0272.nextInt();

        // Check if the year is a leap year using logical expressions and conditional statements
        boolean M24W0272 = false;
        if (yearM24W0272 % 4 == 0) {
            if (yearM24W0272 % 100 != 0) {
                M24W0272 = true;
            } else {
                if (yearM24W0272 % 400 == 0) {
                    M24W0272 = true;
                }
            }
        }
        // Print the result
        if (M24W0272) {
            System.out.println(yearM24W0272 + " is a leap year.");
        } else {
            System.out.println(yearM24W0272 + " is not a leap year.");
        }
        // Close the scanner
        scM24W0272.close();
    }
}
