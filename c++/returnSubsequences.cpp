/*
Return subsequences of String
Given a string (lets say of length n), return all the subsequences of the given string.
Subsequences contain all the strings of length varying from 0 to n.
But the order of characters should remain same as in the input string.

Note : The order of subsequences are not important.

Sample Input:

abc

Sample Output:

"" (the double quotes just signifies an empty string, don't worry about the quotes)
c
b
bc
a
ac
ab
abc


*/
#include <iostream>
using namespace std;
#include<string.h>
//tip : try to think at an instant
/***
You need to save all the subsequences in the given 2D output array. And return the number of subsequences(i.e. number of rows filled in output) from the given function.

Don’t print the subsequences, just save them in output.
***/
#include<string.h>
 int subs(char input[], int ei, char out[][50]) {
	if (ei == -1) {
		out[0][0] = '\0';
		return 1;
	}
	int smallOutputSize = subs(input, ei - 1, out);
	//copy the output so far and add current end element
	for (int i = 0; i < smallOutputSize; i++) {
		int j = 0;
		while (out[i][j] != '\0') {
			out[i + smallOutputSize][j] = out[i][j];
			j++;
		}
		out[i + smallOutputSize][j] = input[ei];
		j = j + 1;
		out[i + smallOutputSize][j] = '\0';
	}
	//now the no. of elements is doubled
	return 2*smallOutputSize;
}



int subSequences(char str[], char out[][50]) {
    return	subs(str,strlen(str)-1,out);
}

int main() {
	char in[] = "abcd";
	char out[20][50];
	int outputSize = subs(in, 3, out);
	for (int i = 0; i < outputSize; i++) {
		cout << out[i] << endl;
	}
}

/* Important points :
1. There is not DP solution of it, actually we are asking to generate all possible subsets(Power Set),
    since all subsets are unique, overlapping feature doesn't exist and DP can't be used.
    So,we have to use exhaustive search.
2. subsequences,subsets are the same things. = 2^n-1 non empty subsequences
*/
