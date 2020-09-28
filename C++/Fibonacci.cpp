#include<iostream>
using namespace std ;

void fibUsingLoop( int n ) {

    // Solve the bugs if there are any 

    int first = 0; 
    int second = 1;
    int third = first + second ;
    
    for (int i = 0; i < n; i++) {
        
        cout << first << " " ;

        first = second ;
        second = third ;
        third = first + second ;

    }
    
}

int main() {

    int n ;

    cout << "How many numbers from fib series? : ";
    cin >> n ;

    fibUsingLoop(n) ;

    /* Write a function to print fibonacci series using recursion */
    // fibUsingRecursion(n) ;

    return 0;
}
