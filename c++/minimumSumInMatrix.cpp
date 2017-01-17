/*
Minimum Sum in matrix
Given an integer 2D matrix (of size n x 3), you need to find the smallest sum possible while taking one element from each row. The rules for selecting elements are as follows -

1. In a row, after selecting an element at a given position, you cannot select the element directly below it
2. You can only select elements which are not directly below it.

Keeping the following rules in mind, you have to return the smallest sum that is possible while covering all the rows.
No. of columns are fixed i.e. 3.

Input format :

Line 1 : n (Total number of rows)

n lines containing matrix elements separated by space
Sample Input :

4
1 2 3
4 5 6
7 8 9

Sample Output :

13

*/
#include<iostream>
using namespace std;

#include <cmath>
//nice solution

int minSum(int **input, int n) {
	int temp[6];
	for(int i=0;i<n-1;i++)
      	{
    //we are checking for all the possibilities(just like we do in cross product)

		temp[0] = input[i][1] + input[i+1][0];
		temp[1] = input[i][2] + input[i+1][0];
		temp[2] = input[i][0] + input[i+1][1];
		temp[3] = input[i][2] + input[i+1][1];
		temp[4] = input[i][0] + input[i+1][2];
		temp[5] = input[i][1] + input[i+1][2];
	//combining the conclusion from 2 rows at this instant ,its like:
	//row (i+1) = row(i) + row(i+1) and in each resultant rowumn we have 3 minimum sum outcomes
		input[i+1][0] = min(temp[0], temp[1]);
		input[i+1][1] = min(temp[2], temp[3]);
		input[i+1][2] = min(temp[4], temp[5]);
     	}

    // return the minimum sum from the last row
	int ans = min(input[n-1][0], min(input[n-1][1], input[n-1][2]));
	return ans;
}

int main(){
    int row;
    cout<<"enter no. of rows in a matrix: ";
    cin>>row;
    cout<<endl<<"enter elements:";
    int i,j;
    //dynamic allocation of a 2d array
    int **arr=new int*[row];
    for(i=0;i<row;i++){
        //dynamically allocate each row of array
        arr[i] = new int [3];
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<minSum(arr,row);
    return 0;
}

/*Things I learnt form this program :
1. carefully analyze the problem, don't create hustle.
2. before actually compiling using compiler, compile it in it your mind.
3. Dynamic allocation of 2D array :)
4. awesome solution trick, for getting optimized solutions out of the feasible one,
    I guess this comes under Dynamic Programming, though earlier I was trying a greedy approach, which were not able to pass
    the test cases.
    So, The conclusion is, Greedy approach doesn't always give the required optimized solution.
*/
