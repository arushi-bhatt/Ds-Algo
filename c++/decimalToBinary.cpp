/*
Given a decimal number as an integer, convert it to the corresponding binary number using array. That means, you need to save that binary representation of the given decimal number in an array.
No need to print the output array elements.

Input format : Decimal number (int)
Sample Input:

12

Sample Output:

1 1 0 0
*/
#include<iostream>
using namespace std;


int DecimalToBinary(int num, int output[]) {
    if (num/2==0)
        { output[0]=1;
         return 1;}
    else
    {
        int rem=num%2;
        int q=num/2;
        int n= DecimalToBinary(num/2,output);
        output[n++]=rem;
        return n;
    }
}

int main(){
    int num,output[40];
    cout<<"enter number : ";
    cin>>num;
    int n =DecimalToBinary(num,output);
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<output[i]<<" ";
    }

return 0;}


