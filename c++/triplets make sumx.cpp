//This program find triplets which make sum of x

#include<iostream>
#include<cmath>
using namespace std;
//___________________________________________________________________

void bubbleSort(int arr[],int n){
            int i,j,temp;
            for(i=1;i<n;i++){
                for (j=0;j<n-i;j++){
                    if(arr[j]>arr[j+1]){
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }

            }

}
//____________________________________________________________________

void pairSum(int arr[], int n, int sum,int si)
{
    // Consider all possible pairs and check their sums
    for (int i=si+1; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]+arr[j] == sum)
                cout<<arr[si]<<" "<<arr[i]<<" "<<arr[j]<<endl;

}
//________________________________________________________________________

void triplets(int arr[],int n,int sum){
    bubbleSort(arr,n);
    int i,j;
    for(i=0;i<n;i++){
        pairSum(arr,n,sum-arr[i],i);
    }
}
//_________________________________________________________________________
 int main(){
    int n,sum;
    cout<<"no. of elements in array and value of sum :: ";
    cin>>n>>sum;
    cout<<endl;

    int i;

    int *a=new int[n];
    cout<<"Enter elements of array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"triplets: "<<endl;
    triplets(a,n,sum);
    delete [] a;
    return 0;
 }
