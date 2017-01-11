/*A sorted array has been rotated by some number k in clockwise direction. Find
k. E.g. Input: 5,6,1,2,3,4 Output: 2 */

#include<iostream>
using namespace std;

int FindSortedArrayRotation(int arr[], int n){
	int i;
	int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1])
            count++;
        else {count++;
                break;}
    }
    if(i==n-1)
        count=0;
    return count;
}

int main(){
    int n;
    cout<<"no. of elements : ";
    cin>>n;

    cout<<endl;
    cout<<"Enter elements : ";
    int i;
    int *arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl<<"NO. of rotations(value of k) : "<<FindSortedArrayRotation(arr,n);
    return 0;
}
