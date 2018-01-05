//Binary Search (only for sorted array)
/*
Binary Search (Recursive approach)
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.

Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)
Sample Input :

6
2 3 4 5 6 8
5

Sample Output:

3

*/

#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}


int main()
{
    int n;
    cout<<"no. of elements : ";
    cin>>n;

    cout<<endl;

    int *arr=new int[n];//declare dynamic array

    cout<<"Enter elements : ";
    int i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int no;
    cout<<"NO. U want to search : ";
    cin>>no;
    cout<<"position (=-1 if not found ): "<< binarySearch(arr,0,n-1,no)+1;
    delete [] arr;
    return 0;
}
