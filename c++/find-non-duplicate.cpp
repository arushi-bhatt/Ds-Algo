
// Given 2N+1 numbers out of which N are duplicate find the non-duplicate number.
//complexity O(n)
#include<iostream>
#include<cmath>
using namespace std;
int FindDuplicate(int arr[], int n){
	// Write your code here
	int i,x=0;
    for(i=0;i<n;i++)
           x=x^arr[i];
    return x;
}

int main()
{
    int arr[20],n;
    cout<<"no. of elements (odd no.): ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements (only on of them is non-duplicate): ";
    int i;
    for(i=0;i<n;i++)
    cin>>arr[i];

    cout<<endl<<"non-duplicate element is :"<<FindDuplicate(arr,n);
    cout<<endl;
    return 0;
}

/*
//convert decimal into binary
int division(long int num,int base)
{
    if (num/base==0)
        return 1;
    else
        return((num%base)+division(num/base,base)*10);
}
//converting binary no. to decimal
int basepower(long int  num,int base)    //*(base)^n
{
    int i =0,res=0;
    long int  q;
    q=num;
while(q>0)
{
    res+=(q%10)*(pow(base,i));
    q=q/10;
    i++;
}
    return res;
}
*/
