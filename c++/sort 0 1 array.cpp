/*Question : You are given with an array containing only 0’s and 1’s. Write a function to
sort this array. Do it in one pass, this means you can’t first find the count of
0’s and 1’s in one pass and update the array in second pass */
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int arr[20],n;
cout<<"no. of elements : ";
cin>>n;
cout<<endl;
cout<<"Enter elements : ";
int i,j;
for(i=0;i<n;i++)
cin>>arr[i];

int temp;
for(i=0,j=n-1;!(i>j);)
{
 if(arr[i]==1&&arr[j]==0&& i!=j)
    {
        arr[i]=0;
        arr[j]=1;

    }
    else {if(arr[i]==0)
        i++;
        cout<<i;

    if(arr[j]==1)
        j--;
        cout<<j;
    }
    }
cout<<endl<<"sorted array : "<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    cout<<endl;
    return 0;
}
