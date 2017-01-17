/*
Print Subsequences
Given a string (lets say of length n), print all the subsequences of the given string.
Subsequences contain all the strings of length varying from 0 to n. But the order of characters should remain same as in the input string.
Note : The order of subsequences are not important. Print every subsequence in new line.
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
void printsubs(char input[], char outputSoFar[], int start) {
    //base condition
	if (input[start] == '\0') {
		cout << outputSoFar << endl;
		return;
	}
    //when particular element is not selected
	printsubs(input, outputSoFar, start + 1);
	//when particular element is selected,it is added at the end of outputSoFar
	int length = strlen(outputSoFar);
	outputSoFar[length] = input[start];
	outputSoFar[length + 1] = '\0';
	//call for further elements
	printsubs(input, outputSoFar, start + 1);
	//at the end, remove the element you added
	outputSoFar[length] = '\0';
}

int main() {
	char in[] = "abc";
	//initialize the out array with null character
	char out[10] = {0};

    printsubs(in, out, 0);
}

/* Important points :
1. There is not DP solution of it, actually we are asking to generate all possible subsets(Power Set),
    since all subsets are unique, overlapping feature doesn't exist and DP can't be used.
    So,we have to use exhaustive search.
2. subsequences,subsets are the same things. = 2^n-1 non empty subsequences
*/
