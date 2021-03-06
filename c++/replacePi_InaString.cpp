/*
Replace pi (recursive)
Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :

xpix

Sample Output :

x3.14x

Sample Input 2 :

pipi

Sample Output :

3.143.14

Sample Input 3 :

pip

Sample Output :

3.14p
*/

#include<iostream>
#include<cstdio>
using namespace std;
// Change in the given string itself. So no need to return or print anything
//count keeps the record of total no of 'pi' till now

//version 2
void helper(char str[],int si,int count){
    if(str[si]=='\0'){
        str[si+(count*2)]='\0';
        return;
    }

    if(str[si]=='p' && str[si+1] =='i'){
        count++;
        helper(str,si+2,count);
        int c = 2* --count;
        str[si + c]='3';
        str[si+c+1]='.';
        str[si+c+2]='1';
        str[si+c+3]='4';
    }
    else {helper(str,si+1,count);
        str[si+(count*2)]=str[si];
    }
}

void replacePi(char input[]) {
    helper(input,0,0);
}

int main(){
    char str[40];
    cout<<"enter string : ";
    gets(str);
    replacePi(str);
    cout<<str;
    return 0;
}


//version 1
/*
int length(char a[], int startIndex) {
	if (a[startIndex] == '\0') {
		return 0;
	}
	return 1 + length(a, startIndex + 1);
}

//Replace pi
void changePiH(char a[], int startIndex) {
	if (a[startIndex] == '\0') {
		return;
	}

	if (a[startIndex] == 'p' && a[startIndex + 1] == 'i') {
		int len = length(a, 0);
		for (int i = len; i >= startIndex; i--) {
			a[i + 2] = a[i];
		}
		a[startIndex] = '3';
		a[startIndex + 1] = '.';
		a[startIndex + 2] = '1';
		a[startIndex + 3] = '4';
		changePiH(a, startIndex + 4);
	} else {
		changePiH(a, startIndex + 1);
	}
}

void changePi(char a[]) {
	changePiH(a, 0);
}


int main()
{
    char a[100];
	cin >> a;
	changePi(a);
	cout << a << endl;
    return 0;
}
*/
