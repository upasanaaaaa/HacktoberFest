# Solve the bugs if there are any
def fibUsingLoop(n):

    first = 0
    second = 1
    third = first + second

    for i in range(n):
        print(first)

        first = second
        second = third
        third = first + second


n = input("How many numbers from fib series? : ")

fibUsingLoop(n)

# Write a function to print fibonacci series using recursion
# fibUsingRecursion(n) ;
