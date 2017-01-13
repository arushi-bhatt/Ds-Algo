/*

Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :

xaxb

Sample Output 1:

ab

Sample Input 2 :

abc

Sample Output 2:

abc

Sample Input 3 :

xx

Sample Output 3:

*/


#include<iostream>
#include<cstdio>
using namespace std;
// Change in the given string itself. So no need to return or print anything
void helper(char str[],int si,int count){
    if(str[si]=='\0'){
        str[si-count]='\0';
        return;
    }

    if(str[si]=='x'){
        count++;
        helper(str,si+1,count);
    }
    else {char temp = str[si];
        helper(str,si+1,count);

        str[si-count]=temp;
    }
}

void removeX(char input[]) {
    helper(input,0,0);
}
int main(){
    char str[40];
    cout<<"enter string : ";
    gets(str);
    removeX(str);
    cout<<str;
    return 0;
}
