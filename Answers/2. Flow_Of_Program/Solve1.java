// Input a year and find whether it is a leap year or not.
import java.util.Scanner;

public class Solve1 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)){
            System.out.print("Enter Year : ");
            int year = input.nextInt();

            if(year % 400 == 0)
                System.out.print(year + "is a Leap Year");
        
            else if (year % 4 == 0  && year % 100 != 0)
                System.out.print(year + " is a Leap Year");
            else
            System.out.print(year + " is not a Leap Year");
        }
    }
}