package Java;

public class LargestOfNumbers {
    static int largestOfTwo( int num1, int num2 ) {
        if( num1 > num2 )
            return num1;
        return num2;
    }

    static int largestOfThree( int num1, int num2, int num3 ) {
        return largestOfTwo(largestOfTwo(num1,num2),num3);
    }
  
    static int largestOfFour( int num1, int num2, int num3,int num4 ) {
        return largestOfTwo(largestOfThree(num1,num2,num3),num4);
    }
    
    static int largestOfFive( int num1, int num2, int num3,int num4,int num5 ) {
        return largestOfTwo(largestOfFour(num1,num2,num3,num4),num5);
    }

    public static void main(String[] args) {

        int n1 = 50;
        int n2 = 400;
        int n3 = -10;
        int n4 = 500;
        int n5 = -50;

        System.out.println( "Largest among n1, n2 : "+largestOfTwo( n1, n2 ) ) ;
        System.out.println( "Largest among n1, n2, n3 : "+largestOfThree( n1, n2, n3 ) ) ;
        System.out.println( "Largest among n1, n2, n3, n4 : "+largestOfFour( n1, n2, n3, n4 ) ) ;
        System.out.println( "Largest among n1, n2, n3, n4, n5 : "+largestOfFive( n1, n2, n3, n4, n5 ) ) ;
    }

}
