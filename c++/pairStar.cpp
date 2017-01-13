/*

Pair star
Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Sample Input 1 :

hello

Sample Output 1:

hel*lo

Sample Input 2 :

xxyy

Sample Output 2:

x*xy*y

Sample Input 3 :

aaaa

Sample Output 3:

a*a*a*a
*/

#include<iostream>
#include<cstdio>
using namespace std;
// Change in the given string itself. So no need to return or print the changed string.

void helper(char str[],int si,int count){
    if(str[si]=='\0')
    {

        str[si+count]='\0';

    return;
    }

    if(str[si]== str[si+1])
    {
        count++;
        helper(str,si+1,count);
        int c =--count;
        str[si+c]=str[si];
        str[si+c+1]='*';
        str[si+c+2]=str[si];


    }

    else {helper(str,si+1,count);
        str[si+count]=str[si];
    }
}
void pairStar(char input[]) {

    helper(input,0,0);

}

int main(){
    char str[40];
    cout<<"enter string : ";
    gets(str);
    pairStar(str);
    cout<<str;
    return 0;
}
