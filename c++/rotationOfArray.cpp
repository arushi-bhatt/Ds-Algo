/*
Write a function Rotate(arr[], nr, n) that rotates arr[] of size n by nr elements
(towards right).
Eg. Input : {1, 2, 3, 4, 5, 6, 7} n = 7 and d = 2
Output : {3, 4, 5, 6, 7, 1, 2}
*/

#include<iostream>
using namespace std;

void Rotate(int arr[],int nr,int n)
{
    int i,j,k,prev,temp;
    while (nr>0){
        i=n-2;
        prev=arr[n-1];
        temp=arr[n-1];

        for(i=n-2;i>=0;i--){
            prev=temp;
            temp=arr[i];
            arr[i]=prev;
        }
        arr[n-1]=temp;
    nr--;
    }
}
int main(){
//n=no.of elements
//nr = no. of rotations
    int n,nr;
    cout<<"no. of elements and no. of rotations : ";
    cin>>n>>nr;

    cout<<endl;
    cout<<"Enter elements : ";
    int i;
    int *arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    Rotate(arr,nr,n);
    cout<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
