import java.util.Scanner;

public class Solve2 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter no. of units : ");
            int units = input.nextInt();
            
            double bill = 0;
        	if(units<100) {
	            bill = units*1.20;
	        }
	        else if(units<300) {
	            bill = 100*1.20 + (units-100)*2;
	        }
	        else if(units>300) {
	            bill = 100*1.20 + 200*2 + (units-300)*3;
	        }
            System.out.println("Bill to pay : " + bill);
        }
    }    
}