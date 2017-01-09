//sort array of elements having '0 and 1 ' only

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
int i,j,k;
for(i=0;i<n;i++)
cin>>arr[i];



for(i=0,j=n-1,k=0;k<=j;)
{

    if(arr[k]==0){swap(arr[i],arr[k]);
    i++; k++;}
else if(arr[k]==2){
        swap(arr[k],arr[j]);
    j--;}
   else  k++;
}
cout<<endl<<"sorted array : "<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    cout<<endl;
    return 0;
}
