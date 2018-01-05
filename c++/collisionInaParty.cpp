/*Collisions in Party
Once N boys and M girls attended a party. You are given a matrix A of N rows and M columns where Aij is 1 if the i-th boy likes the j-th girl, otherwise it will be 0.
You know that if there are two different boys x and y, who both like girl z, then there will be a collision. You have to calculate the number of collisions at this party.

Input Format :

Line 1 : Two space separated integers N, M denoting the number of boys and girls, respectively.

Line 2 : Following N lines contain M characters, each of them is either '0' or '1'.

Output Format : Output an integer corresponding to the number of collisions at the party.
Sample Input 1 :

2 3
111
100

Sample Output 1:

1

Sample Input 2 :

4 3
111
100
110
000

Sample Output 2:

4

*/
#include<iostream>
using namespace std;
#include<cstdio>
#include<stdlib.h>
int findCollisions(char **mat, int n, int m) {
    int coll=0;
    int j,i;
    int k=0;

    for(i=0;i<m;i++){
        k=0;
        for(j=0;j<n;j++){
           k=k+(mat[j][i]-48);
        }

        coll=coll+(k*(k-1))/2;
    }
    return coll;
}

int main(){
    int boys,girls;
    cout<<"enter no. of boys and girls in a matrix: ";
    cin>>boys>>girls;
    cout<<endl<<"enter array elements:";
    int i,j;
    fflush(stdin);
    //dynamic allocation of a 2d array
    char **arr=new char* [boys];
    for(i=0;i<boys;i++){
        //dynamically allocate each row of array
        arr[i] = new char[girls+1];
        cin>>arr[i];
    }
    cout<<findCollisions(arr,boys,girls);
    // release dynamically allocated memory
	for (i=0; i < boys; i++)
		delete [] arr[i];// each array of characters

	delete [] arr;// the array of pointers
    return 0;
}
