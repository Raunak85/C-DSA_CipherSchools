import java.util.*;
/**
 * LeapYear
 */
public class LeapYear {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any number for checking number is leap year or not");
        int leapYear = sc.nextInt();
        if(leapYear%4 == 0 && leapYear != 00 || leapYear%400 == 0){
            System.out.println(leapYear+" is a Leap Year");
        }
        else{
            System.out.println(leapYear+" is not Leap Year");
        }
    }
}