/*Check reverse string
Given two strings check if one is reverse of the other. Return true or false.
Try doing it recursively.

Input format :

Line 1 : String 1

Line 2 : String 2
Sample Input 1 :

hello
olleh

Sample Output 1:

true

Sample Input 2 :

ninja
nando

Sample Output 2:

false

*/


#include<iostream>
using namespace std;
#include<cstdio>
#include<string.h>

bool helper(char str1[],char str2[],int len,int si){
     if(len-1==si){
         return true;
     }
     if(str1[si]==str2[len-1-si]){
      return helper(str1,str2,len,si+1);
     }
     else return false;

 }

bool checkReverse(char str1[], char str2[]) {
    //check if the two strings have same length, this also avoids segmentation fault
    if(strlen(str1)==strlen(str2)){
        return helper(str1,str2,strlen(str1),0);
    }
    else return false;
}


int main(){
    char str1[40],str2[40];
    cout<<"enter string : ";
    gets(str1);
    gets(str2);
    cout<<endl;
    if(checkReverse(str1,str2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
