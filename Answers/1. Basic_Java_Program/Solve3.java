// Write a program to input principal, time, and rate (P, T, R) from the user 4-and find Simple Interest.
import java.util.Scanner;

public class Solve3 {
	public static void main(String[] args) {

        try (Scanner input = new Scanner(System.in)){
		    double Principal, Rate, Time, SI = 0;
		    System.out.print(" Please Enter the Principal Amount : ");
		    Principal = input.nextDouble();
		    System.out.print(" Please Enter the Rate Of Interest : ");
		    Rate = input.nextDouble();
		    System.out.print(" Please Enter the Time Period in Years : ");
		    Time = input.nextDouble();
		
		    SI = (Principal * Rate * Time) / 100;
		
		    System.out.println("\n The Simple Interest for Principal Amount " + Principal + " is = " + SI);
	    }
    }
}