/*

Duplicate in array
Given an array of integers of size n which contains numbers from 0 to n - 2. Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. You need to find and return that duplicate number present in the array.

Assume, duplicate number is always present in the array.

Input format :

Line 1 : Size of input array

Line 2 : Array elements (separated by space)
Sample Test:
Input:

9
0 7 2 5 4 7 1 3 6

Output:

7
*/


#include<iostream>
using namespace std;
// arr - input array
// size - size of array
//complexity : O(n)
int Find_duplicate(int arr[], int size){
	int *done =new int[size-1];
	int i;
	for(i=0;i<size-1;i++)
	    done[i]=0;
	for(int i=0;i<size;i++){
	    if(done[arr[i]]==1){
	        delete [] done;
	        return arr[i];
	    }
	    else done[arr[i]]++;
	 }
}

int main(){
//n=no.of elements

    int n;
    cout<<"no. of elements: ";
    cin>>n;

    cout<<endl;
    cout<<"Enter elements : ";
    int i;
    int *arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl<<"duplicate no : "<<Find_duplicate(arr,n);

}
