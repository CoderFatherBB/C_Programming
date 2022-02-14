// To find out whether the given String is Palindrome or not.
import java.util.Scanner;

public class Solve9 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Enter a string : ");
            String str1  = input.next();
            String str2 = "";
            
            int len = str1.length() - 1;
            for (int i = len; i >= 0 ; i--) {
                str2 += str1.charAt(i);
            }
            if (str2.equals(str1)) {
                System.out.println("It is a Pallindromic String");
            }
            else {
                System.out.println("It is not a Pallindromic String");
            }
        }
    }
    
}