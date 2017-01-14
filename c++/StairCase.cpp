/*
Staircase
A child is running up a staircase with n steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.

Input format : n (No. of steps) (n <= 30)
Sample Input 1:

4

Sample Output 1:

7

*/

#include<iostream>
using namespace std;

int waysUpStair(int n){
//we hav e 3 base conditions
    if(n==1)
        return 1;

    if(n==2)
        return 2;

    if(n==3)
        return 4;

//in other cases
    return waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);
}

int main(){
    int n;
    cout<<"enter no. of steps : ";
    cin>>n;
    cout<<"ways: "<<waysUpStair(n);
    return 0;
}
