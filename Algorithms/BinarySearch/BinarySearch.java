
class BinarySearch { 
	int IterativeBinarySearch(int arr[], int x) 
	{ 
		int l = 0, r = arr.length - 1; 
		while (l <= r) { 
			int m = l + (r - l) / 2; 

			// Check if x is present at mid 
			if (arr[m] == x) 
				return m; 

			// If x greater, ignore left half 
			if (arr[m] < x) 
				l = m + 1; 

			// If x is smaller, ignore right half 
			else
				r = m - 1; 
		} 

		// if we reach here, then element was 
		// not present 
		return -1; 
	} 

     int binarySearch(int arr[], int l, int r, int x) 
    { 
        //write the code to implement Recursive BinarySearch
    }

	public static void main(String args[]) 
	{ 
		BinarySearch ob = new BinarySearch(); 
		int arr[] = { 2, 3, 4, 10, 40 }; 
		int n = arr.length; 
		int x = 10; 
        int y = 5;
		int result1 = ob.IterativeBinarySearch(arr, x); 
		int result2 = ob.RecursiveBinarySearch(arr, y); 
		if (result1 == -1) 
			System.out.println("Element not present"); 
		else
			System.out.println("Element found at "
							+ "index " + result1); 
        if (result2 == -1) 
			System.out.println("Element not present"); 
		else
			System.out.println("Element found at "
							+ "index " + result2); 
	} 
} 
