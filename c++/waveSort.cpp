/*

Wave sort
Given a random integer array, sort this array into a wave like pattern. In other words, arrange the elements as a0 >= a1 <= a2 >= a3 <= a4>= a5..... Try doing it in minimum change in the given array.
Change in the input array itself. You don't need to return or print elements.
Note : Don't sort the array.

Input format :

Line 1 : n (Array Size)

Line 2 : Array elements (separated by space)
Sample Input 1:

10
718 17 751 885 936 902 829 820 713 270

Sample Output 1:

718 17 885 751 936 829 902 713 820 270
*/

#include<iostream>
using namespace std;


void swp(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void sortInWave(int arr[], int n) {

	int i;
	for(i=0;i<n-1;i++){
	    if(i%2==0){
	        if(arr[i]<arr[i+1])
	            swp(&arr[i],&arr[i+1]);
	    }
	    else {
	        if(arr[i]>arr[i+1])
	            swp(&arr[i],&arr[i+1]);
	    }
	}

}


int main(){
//n=no.of elements

    int n;
    cout<<"no. of elements : ";
    cin>>n;

    cout<<endl;
    cout<<"Enter elements : ";
    int i;
    int *arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    sortInWave(arr,n);
    cout<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    delete []arr;
    return 0;
}
