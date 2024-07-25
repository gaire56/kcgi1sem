/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */

import java.util.Scanner;

public class RoundedDown {
    public static void main(String[] args){
        Scanner scannerM24W0272 = new Scanner(System.in);
        
        //Promprt user for input
        System.out.print("Enter a decimal number: ");
        double numberM24W0272 = scannerM24W0272.nextDouble();

        //using truncation (flooring) to round down
        int roundedDownM24W0272 = (int) numberM24W0272;

        //Display the result
        System.out.println("Rounded down: " + roundedDownM24W0272);

        scannerM24W0272.close();
    }
}
