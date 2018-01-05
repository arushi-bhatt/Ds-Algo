//insertion sort of an array

#include<iostream>
using namespace std;
// arr - input array
// n - size of array
void InsertionSort(int arr[], int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        for (j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"no. of elements : ";
    cin>>n;
    cout<<endl;

    int i;
    //declare dynamic array
    int *arr =new int[n];

    cout<<"Enter elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];

    InsertionSort(arr,n);

    cout<<"sorted array "<<endl;
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
return 0;
}

