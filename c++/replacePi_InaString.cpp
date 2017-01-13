#include<iostream>
using namespace std;
// Change in the given string itself. So no need to return or print anything

void helper(char str[],int si,int count)
{
    if(str[si]=='\0')
    {

        str[si+(count*2)]='\0';

    return;
    }

    if(str[si]=='p' && str[si+1] =='i')
    {
        count++;
        helper(str,si+2,count);
        str[si]='3';
        str[si+1]='.';
        str[si+2]='1';
        str[si+3]='4';
        count--;
    }

    else {helper(str,si+1,count);
        str[si+(count*2)]=str[si];
    }
}
void replacePi(char input[]) {

    helper(input,0,0);

}
