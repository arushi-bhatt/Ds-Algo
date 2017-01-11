/*
Sum of two arrays
Two random integer arrays are given, in which numbers from 0 to 9 are present at every index (i.e. single digit integer is present at every index of both given arrays). You need to find sum of both the input arrays and put the result in another array i.e. output array.
The size of both input arrays can be different. No need to print the elements of output array.
Note : Output array size should be 1 more than the size of bigger array and place 0 at the 0th index if there is no carry.

Input format :

Line 1 : Array 1 Size

Line 2 : Array 1 elements (separated by space)

Line 3 : Array 2 Size

Line 4 : Array 4 elements (separated by space)
Sample Input 1:

3
6 2 4
3
7 5 6

Sample Output 1:

1 3 8 0

Sample Input 2:

3
8 5 2
2
1 3

Sample Output 2:

0 8 6 5
*/

#include<iostream>
using namespace std;


void sumOfTwoArrays(int a[], int na, int b[], int nb, int output[]){

	int *temp;
	temp = NULL;
	//ensure that array a has bigger size
	if(nb>na){
        temp=a;
        a=b;
        b=temp;

        na=na+nb;
        nb=na-nb;
        na=na-nb;
	}

	int x,y;
	int carry=0;
	int i,j,s;
	//starting from the back for all the arrays
	for(i=na-1,j=nb-1,s=na;s>=0;i--,j--,s--){

        if(i<0)
            x=0;
        else x=a[i];

        if(j<0)
            y=0;
        else y=b[j];
        //check to include carry or not
        if(x+y+carry <= 9)
            {output[s]= carry+x+y;
             carry=0;
            }
        else{
            output[s]=(x+y+carry)-10;
            carry=1;
            }
    }

}

int main(){
    int na,nb;
    cout<<"enter size of array1 and and array 2 : ";
    cin>>na>>nb;
    int *a= new int[na];
    int *b= new int[nb];

    cout<<"enter the elements of array1 :";
    int i;
    for(i=0;i<na;i++)
        cin>>a[i];

    cout<<"enter the elements of array2 :";
    for(i=0;i<nb;i++)
        cin>>b[i];

    int maximum= na>nb ? na : nb;
    int *output =new int[maximum+1];

    sumOfTwoArrays(a,na,b,nb,output);

    cout<<"output array : "<<endl;
    for(i=0;i<=maximum;i++)
        cout<<output[i]<<" ";

return 0;}
