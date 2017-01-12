/*

Array Equilibrium Index
Find and return the equilibrium index of an array. Equilibrium index of an array is an index i such that the sum of elements at indices less than i is equal to the sum of elements at indices greater than i.

If more than one equilibrium index is present, you need to return the first one. And return -1 if no equilibrium index is present.

Input format :

Line 1 : Size of input array

Line 2 : Array elements (separated by space)
Sample Input:

7
-7 1 5 2 -4 3 0

Output:

3
*/

#include<iostream>
using namespace std;

int equilibrium(int arr[], int n) {
	int *s1 = new int[n];
    int *s2 = new int[n];
    int i;
    s1[0]=arr[0];
    for(i=1;i<n;i++){
        s1[i]=s1[i-1]+arr[i];
    }

    s2[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--){
        s2[i]=s2[i+1]+arr[i];
    }

    for(i=1;i<n-1;i++){
        if(s1[i-1]==s2[i+1])
            return i;
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

    cout<<endl<<"equilibrium index : "<<equilibrium(arr,n);
    delete [] arr;
    return 0;
}
