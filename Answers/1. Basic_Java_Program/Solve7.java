// Input currency in rupees and output in USD.
import java.util.Scanner;

public class Solve7 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter Currency in IND Rupee : ");
            float  rupees = input.nextFloat();
            
            float  USD = rupees * 0.013f;
            System.out.print("Rupees : " + rupees + "\nUSD Converted : "+ USD );
            
        }
    }
}