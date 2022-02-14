// Factorial Program In Java
import java.util.Scanner;

public class Solve1 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
        
		    System.out.print("Enter a number to find its factorial :");
	        int number = input.nextInt();
		    
            long  factorial = 1;
            int i = 1;
            while( i <= number) {
                factorial=factorial*i;
                i++;
            }
		
            System.out.println("Factorial of " + number + " : " + factorial);
	    }

    }
}