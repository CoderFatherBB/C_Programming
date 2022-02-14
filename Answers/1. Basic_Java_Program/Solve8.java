// To calculate Fibonacci Series up to n numbers.
import java.util.Scanner;

public class Solve8 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Nuber of which you want Fibonacci serise : ");
            int n = input.nextInt();
            int num1 = 0;
            int num2 = 1;
    
            for(int i = 2 ; i < n ; i++){
                int nextnum =  num1 + num2;
                System.out.print(" " + nextnum);
                num1 = num2 ;
                num2 = nextnum;
            }
        }
    }
}
