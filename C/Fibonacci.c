#include<stdio.h>

void fibUsingLoop( int n ) {

    // Solve the bugs if there are any 

    int first = 0; 
    int second = 1;
    int third = first + second ;
    
    for (int i = 0; i < n; i++) {
        
        printf( "%d ", first ) ;

        first = second ;
        second = third ;
        third = first + second ;

    }
    
}

void main() {

    int n ;

    printf("How many numbers from fib series? : ");
    scanf("%d", &n );

    fibUsingLoop(n) ;

    /* Write a function to print fibonacci series using recursion */
    // fibUsingRecursion(n) ;

    
}
