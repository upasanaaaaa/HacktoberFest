function fibUsingLoop(n) {
  // Solve the bugs if there are any

  let first = 0,
    second = 1,
    third = first + second;

  for (let i = 0; i < n; i++) {
    console.log(first);

    first = second;
    second = third;
    third = first + second;
  }
}

let n = prompt("How many numbers from fib series? : ", 0);

fibUsingLoop(n);

/* Write a function to print fibonacci series using recursion */
// fibUsingRecursion(n) ;
//Run this code in Browser Console
