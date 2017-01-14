/*
Merge Sort
Sort an array using Merge Sort.
Change in the input array itself. So no need to return pr print anything.

Input format :

Line 1 : Array size i.e. n

Line 2 : Array elements (separated by space)
Sample Input:

6
2 6 8 5 4 3

Sample Output:

2 3 4 5 6 8

*/

#include<math.h>
#include<iostream>
using namespace std;
//this function merge two sorted subarrays into one big array
void merge2arrays(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int i,j;
    int *c = new int[n1+n2];
    int k;
    for(i=p,j=q+1,k=0;(i<=q)&&(j<=r);k++){
        if(a[i]<=a[j]){
            c[k]=a[i];i++;
        }
        else {c[k]=a[j];j++;}
    }
//if in case still elements are left in any of the subarray
    for(;j<=r;j++,k++){
        c[k]=a[j];
    }
    for(;i<=q;i++,k++){
        c[k]=a[i];
    }
//assign the original array with the new array
    for(i=p,k=0;i<=r;i++,k++){
        a[i]=c[k];
    }
    delete [] c;
}

//recursive function of merge Sort
void mergeSort(int a[], int si,int ei){
    if(si<ei){
        mergeSort(a,si,(si+ei)/2);
        mergeSort(a,((si+ei)/2)+1,ei);
        merge2arrays(a,si,(si+ei)/2,ei);

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

    mergeSort(arr,0,n-1);

    cout<<"sorted array "<<endl;
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
return 0;
}

