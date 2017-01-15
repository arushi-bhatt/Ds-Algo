/*
Weird Number Pattern
Given number of rows, print the given pattern -

1
11
21
1211
111221

Explanation -

Row 1 - Number 1
Row 2 - count of 1 in Row 1 & 1 itself
Row 3 - count of 1 in Row 2 & number 1 itself
Row 4 - count of 2 in Row 3 & number 2 itself, then count of 1 in Row 3 and number 1 itself
and so on...

That means, in every row, you need to print - count of consecutive entries of an element (in previous row) and the element itself.

Input format : N (total number of rows)

Output format : Pattern in N lines
Sample Input 1 :

3

Sample Output 1 :

1
11
21

Sample Input 2 :

5

Sample Output 2 :

1
11
21
1211
111221

*/
#include<iostream>
using namespace std;

void helper(int n,int arr[]){
    //base condition
    if(n==1){
        arr[0]=1;
        arr[1]=0;//0 at the end is used as a terminator of every row
        cout<<arr[0]<<endl;

    }
    //if n>1
    else {helper(n-1,arr);

        int k=-1;//k is counter for the current row no. array
        int *a=new int [10];
        //temporary array for current row

        //traverse through previous array and form current row array on the basis of it
        for(int i=0;arr[i]!=0;i++){
            //count keeps track of the no. consecutive same elements
            int count=1;
            while(arr[i+1]==arr[i]){
                i++;
                count++;
            }
        //assign the record for one distinct element
            a[++k]=count;
            a[++k]=arr[i];
        }
        a[++k]=0;//0 at the end is used as a terminator of every row
        //print current row and assign it to array parameter
        for(k=0;a[k]!=0;k++){
                cout<<a[k];
                arr[k]=a[k];
        }
        arr[k]=0;//add the terminator symbol '0'
        cout<<endl;
        delete a;

    }
}


void printPattern(int n) {
   int arr[10];
   helper(n,arr);


}
int main (){
    cout<<"enter no. of rows :";
    int n; cin>>n;
    printPattern(n);
    return 0;
}

/*Things, I have learnt with this program :
1. frame and decide the flow of every problem at the beginning, before coding
2. local variables address must not be returned, this can produce segmentation fault.
3. Avoid silly errors.
4. Decide 2-3 solutions at the beginnings, then go ahead with the best one.*/
