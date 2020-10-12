class BubbleSort 
{ 
    void bubbleSort(int arr[]) 
    { 
        //complete the method to implement bubble sort
    } 
  
    /* Prints the array */
    void printArray(int arr[]) 
    { 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(arr[i] + " "); 
        System.out.println(); 
    } 
  
    public static void main(String args[]) 
    { 
        BubbleSort ob = new BubbleSort(); 
        int arr[] = {100, 75, 25, 150, 10, 45, 32, 99};  
        ob.bubbleSort(arr); 
        System.out.println("Sorted array"); 
        ob.printArray(arr); 
    } 
} 