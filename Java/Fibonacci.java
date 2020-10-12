import java.util.Scanner;


public class Fibonacci {
    static void fibUsingLoop( int n ) {

        // Solve the bugs if there are any 

        int first = 0; 
        int second = 1;
        int third = first + second ;
    
        for (int i = 0; i < n; i++) {
        
            System.out.print( first + " ") ;

            first = second ;
            second = third ;
            third = first + second ;

        }   
    
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("How many numbers from fib series? : ");
        
        int n = in.nextInt();

        fibUsingLoop(n) ;

        /* Write a function to print fibonacci series using recursion */
        // fibUsingRecursion(n) ;

        
    }


}
