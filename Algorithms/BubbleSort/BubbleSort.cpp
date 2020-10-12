#include <bits/stdc++.h> 
using namespace std; 
  
  
void bubbleSort(int arr[], int n)  
{  
   //complete the function to implement bubble sort
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
int main()  
{  
    int arr[] = {100, 75, 25, 150, 10, 45, 32, 99};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  