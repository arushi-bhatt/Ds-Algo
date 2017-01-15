/*
Check AB

Suppose you have a string made up of only 'a' and 'b'. Write a recursive function that checks if the string was generated using the following rules:

a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

If all the rules are followed by the given string, return true otherwise return false.
Sample Input:

abb

Sample Output:

true

*/

#include<iostream>
#include<cstdio>
using namespace std;

bool helper(char str[],int si){
    //base condition
    if(str[si]=='\0'){
        return true;
    }
    //this checks for the condition : Each 'a' is followed by nothing or an 'a' or "bb"
    if(str[si]=='a'){
        if(str[si+1]=='a'||str[si+1]=='\0'||((str[si+1]=='b')&&(str[si+2]=='b')))
            return helper(str,si+1);
        else return false;
    }
    //this checks for the condition : Each "bb" is followed by nothing or an 'a'
    if(str[si]=='b'&&str[si+1]=='b'){
        if(str[si+2]=='a'||str[si+2]=='\0')
            return helper(str,si+2);
        else return false;
    }
}


bool checkAB(char str[]){
//this checks for condition : The string begins with an 'a'
 if(str[0]=='a')
    return helper(str,0);
 else return false;
}

int main(){
    char str[40];
    cout<<"enter string : ";
    gets(str);

    if(checkAB(str))
        cout<<endl<<"true";
    else cout<<endl<<"false";

    cout<<endl;
    return 0;
}
