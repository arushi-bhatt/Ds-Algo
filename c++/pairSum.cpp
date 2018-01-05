/*Pair Sum in array

Given a random integer array and a number x. Find and print the pairs of elements in the array which sum to x.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, 5) print "5 6". There is no constraint that out of 5 pairs which have to be printed on 1st line.
You can print pairs in any order, just be careful about the order of elements in a pair.

Input format :

Line 1 : Array size

Line 2 : Array elements

Line 3 : x

Output format :

Line 1 : Pair 1 elements (separated by space)

Line 2 : Pair 2 elements (separated by space)

Line 3 : and so on
Sample Input:

9
1 3 6 2 5 4 3 2 4
7

Sample Output :

1 6
3 4
3 4
2 5
2 5
3 4
3 4

*/

#include<iostream>
using namespace std;


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

//version 3 {working correctly}
void pairSum(int arr[], int n, int sum)
{
     //to print pairs in ascending order
     bubbleSort(arr,n);

    // Consider all possible pairs and check their sums
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]+arr[j] == sum)
                cout<<arr[i]<<" "<<arr[j]<<endl;

}
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
    cout<<endl<<"pairs: "<<endl;
    pairSum(a,n,sum);
    delete [] a;
    return 0;
 }



//version 2 (not all test cases)
/*

void pairSum(int input[], int siz, int x) {
    bubbleSort(input,siz);
    int *freq = new int[siz];
    int i,j;
	for(i=0;i<siz;i++){
        freq[i]=0;
	}
    int p=0;
    for(i=0;i<siz;i++){
	   // if(freq[i]==0)
        {
             for(j=i+1;j<siz;j++){

                    if(x-input[i]==input[j])
                        {


                        cout<<input[i]<<" , "<<input[j]<<endl;
                        freq[i]++; freq[j]++;
                    }
                    }




        }
	}

}*/



 //version 1 (not all test cases)
 //correct up to two test cases
 /*
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
void pairSum(int input[], int siz, int x) {
    bubbleSort(input,siz);
    int *freq = new int[siz];
    int i,j;
	for(i=0;i<siz;i++){
        freq[i]=0;
	}

    for(i=0;i<siz;i++){
	    if(freq[i]==0)
        {
             for(j=i+1;j<siz;j++){

                    if(x-input[i]==input[j]){
                        cout<<input[i]<<" "<<input[j]<<endl;
                        freq[i]++; freq[j]++;

                    }

             }
        }
	}

	delete [] freq;

} */
