##Important Questions
_____________________________________________________________________
###Q1 = What is Segmentation Fault ?

		Segmentation fault is a specific kind of error caused by accessing memory that “does not belong to you.” It’s a helper mechanism that keeps you from corrupting the memory and introducing hard-to-debug memory bugs. Whenever you get a segfault you know you are doing something wrong with memory – accessing variable that has already been freed, writing to a read-only portion of the memory, etc. Segmentation fault is essentially the same in most languages that let you mess with the memory management, there is no principial difference between segfaults in C and C++.

		There are many ways to get a segfault, at least in the lower-level languages such as C(++). A common way to get a segfault is to dereference a null pointer:
```c++
		int *p = NULL;
		*p = 1;
```
		Another segfault happens when you try to write to a portion of memory that was marked as read-only:
```c++
		char *str = "Foo"; // Compiler marks the constant string as read-only
		*str = 'b'; // Which means this is illegal and results in a segfault
```
		Dangling pointer points to a thing that does not exist any more, like here:
```c++
		char *p = NULL;
		{
		    char c;
		    p = &c;
		}
		// Now p is dangling
```
		The pointer p dangles because it points to character variable c that ceased to exist after the block ended. And when you try to dereference dangling pointer (like *p='A'), you would probably get a segfault


***********************************************************************
2). Return array from function in C
_______________________________________
C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.

If you want to return a single-dimension array from a function, you would have to declare a function returning a pointer as in the following example 

```c++
int * myFunction() {
   .
   .
   .
}
```

Second point to remember is that C does not advocate to return the address of a local variable to outside of the function, so you would have to define the local variable as static variable.

**************************************************************************
3)	DECLARATION OF Dynamic 2d array
__________________________________________
A dynamic 2D array is basically an array of pointers to arrays. You should initialize it using a loop, like this:
```c++
int** ary = new int*[rowCount];
for(int i = 0; i < rowCount; ++i)
    ary[i] = new int[colCount];
```
**************************************************************************
4) Subarray/Substring vs Subsequence
________________________________________________
Subarray/Substring
__________________
A subbarray is a contiguous part of array.
For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays. The subbarays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4). 
In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/subsrings.

How to generate all subarrays?
We can run two nested loops, the outer loop picks starting element and inner loop considers all elements on right of the picked elements as ending element of subarray.
```c++
/*  C++ code to generate all possible subarrays/subArrays
    Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;
 
// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
}
 
// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    return 0;
}
```

Output:

All Non-empty Subarrays
1 
1 2 
1 2 3 
1 2 3 4 
2 
2 3 
2 3 4 
3 
3 4 
4 

 
Subsequence
____________
A subsequence is a sequence that can be derived from another sequence by zero or more elements, without changing the order of the remaining elements.
For the same example, there are 15 sub-sequences. They are (1), (2), (3), (4), (1,2), (1,3),(1,4), (2,3), (2,4), (3,4), (1,2,3), (1,2,4), (1,3,4), (2,3,4), (1,2,3,4). More generally, we can say that for a sequence of size n, we can have ((2^n)-1) non-empty sub-sequences in total.

A string example to differentiate: Consider strings “geeksforgeeks” and “gks”. “gks” is a subsequence of “geeksforgeeks” but not a substring. “geeks” is both a subsequence and subarray. 
**Every subarray is a subsequence. **More specifically, Subsequence is a generalization of substring.

How to generate all Subsequences?
We can use algorithm to generate power set for generation of all subsequences.
```c++
/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include<bits/stdc++.h>
using namespace std;
 
void printSubsequences(int arr[], int n)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n);
 
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}
 
// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subsequences\n";
    printSubsequences(arr, n);
    return 0;
}
```
All Non-empty Subsequences
1 
2 
1 2 
3 
1 3 
2 3 
1 2 3 
4 
1 4 
2 4 
1 2 4 
3 4 
1 3 4 
2 3 4 
1 2 3 4
**************************************************************************
