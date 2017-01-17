#include <iostream>
using namespace std;
#include<string.h>

void printsubs(char input[], char outputSoFar[], int start) {
	if (input[start] == '\0') {
		cout << outputSoFar << endl;
		return;
	}

	printsubs(input, outputSoFar, start + 1);
	int length = strlen(outputSoFar);
	outputSoFar[length] = input[start];
	outputSoFar[length + 1] = '\0';
	printsubs(input, outputSoFar, start + 1);
	outputSoFar[length] = '\0';
}

int main() {
	char in[] = "abc";
	char out[10] = {0};

	printsubs(in, out, 0);
}

