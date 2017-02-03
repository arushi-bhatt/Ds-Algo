/* This Program encode and decode text using the simplest compressing technique : Run Length Encoding */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_RLEN 50
using namespace std;

char *encode(char *src)
{
  int rLen;
  char count[MAX_RLEN];
  int len = strlen(src);
  char *dest = new char[len*2 + 1];
  int i, j = 0, k;
  for(i = 0; i < len; i++)
  {
   dest[j++] = src[i];
    rLen = 1;
    while(i + 1 < len && src[i] == src[i+1])
    {
      rLen++;
      i++;
    }

     sprintf(count, "%d", rLen);

    for(k = 0; *(count+k); k++, j++)
    {
      dest[j] = count[k];
    }
  }

  dest[j] = '\0';
  return dest;
}

char* decode(char* src){
 int num=0,k=0,i=0;
 int len = strlen(src);
  char *dest = new char[len/2 + 2];
for ( i=0;src[i]!='\0';i+=2){
   num=src[i+1]-48;
   while(num!=0){
    dest[k++]=src[i];
    num--;
   }
}
   dest[k++]='\0';
   return dest;

}

int main(){
    char str[40];
    cout<<"\t\t__Run Length Encoding__"<<endl<<endl;
    cout<<"enter the string to be compressed  : ";
    gets(str);
    char *res=encode(str);
    cout<<endl<<"\nEncoded text_____________"<<endl;
    cout<<res<<endl;
    cout<<endl<<"\nDecoded text_____________"<<endl;
    res=decode(res);
    cout<<res<<endl;
    return 0;
}


