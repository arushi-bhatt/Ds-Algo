#include<iostream>
#include<cstdio>
using namespace std;


void helper(char arr[],char op[]){
    if(arr[0]=='\0'){
            op[0]='\0';


        puts(op);
        return;
    }
    int i;

    char b[10];
    for(i=0;arr[i]!='\0';i++){
        b[i]=arr[i+1];
    }
    helper(b,op);
    b[0]=arr[0];

    for(i=0;op[i]!='\0';i++){
        b[i+1]=op[i];
    }
    b[i+1]='\0';
    puts(b);
    for(i=0;b[i]!='\0';i++){
        op[i]=b[i];
    }
    op[i]='\0';


}
void printSubsequences(char input[]) {

   char op[10];
    helper(input,op);

}

int main(){
    char str[10]="abc";

printSubsequences(str);
}
