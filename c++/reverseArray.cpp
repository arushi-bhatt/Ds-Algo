//This Program reverses an array , without using another array

#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int i,j;
    //for loop will stop at the middle of the array
    for(i=0,j=n-1;i<=j;i++,j--) //here i<=j condition must be used rather than i!=j , as otherwise segmentation fault will occur
    { // way of swapping without using temporary variable
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }

}

int main(){
    int n;
    cout<<"no. of elements in array : ";
    cin>>n;
    cout<<endl;

    int i;

    int *a=new int[n];
    cout<<"Enter elements of array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    reverseArray(a,n);

    cout<<endl<<"Reversed Array: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    delete [] a;

return 0;
}
