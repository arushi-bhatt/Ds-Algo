//selection sort of an array

#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    int i,j;
    int minimum,position,temp;
    i=0;

    //selection sort
    while (i<n-1){
         minimum=arr[i];
         position=i;
         for(j=i+1;j<n;j++){
             if(minimum>arr[j]){
                position=j;
                minimum=arr[j];
                }
         }

         temp=arr[i];
         arr[i]=arr[position];
         arr[position]=temp;

         i++;
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

    SelectionSort(arr,n);

    cout<<"sorted array "<<endl;
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
return 0;
}
