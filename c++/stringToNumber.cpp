/*

String to Integer
Write a recursive function to convert a given string into the number it represents.
 That is input will be a numeric string that contains only numbers,
 you need to convert the string into corresponding integer and return the answer.

Input format : Numeric string (string, Eg. "1234")

Output format : Corresponding integer (int, Eg. 1234)
Sample Input 1 :

1231

Sample Output 1:

1231
*/

#include<string.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;



int stringToNumber(char a[]){
    //base condition
    if (a[0]=='\0')
        return 0;
    //other cases
    int num;
    char b[20];int i=1;

    for( i=1;a[i]!='\0';i++)
            {
                b[i-1]=a[i];
            }

    b[i-1]='\0';

    num=((a[0]-48)*pow(10,i-1))+stringToNumber(b);
    return num;
}

int main()
{
    int i,j;
    char arr[20];
    arr[0]='\0';


    cout<<"Enter no (it will be stored as a string ) : ";
    gets(arr);
    cout<<stringToNumber(arr);

    return 0;
}
