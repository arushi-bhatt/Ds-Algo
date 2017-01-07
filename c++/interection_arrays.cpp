//INTERSECTION OF ARRAYS (unsorted)

#include<iostream>
using namespace std;

void intersectionOfArray(int a[],int b[],int na, int nb){
    int i,j;

    int *done = new int[nb];
    for(i=0;i<nb;i++){
        done[i]=0;
    }

    for(i=0;i<na;i++){
        for(j=0;j<nb;j++){
            if(!done[j])
            if(a[i]==b[j]){
                cout<<a[i]<<",";
                done[j]++;
                break;
            }
        }
    }
delete [] done;
}

int main()
{
    int a[20],b[20],na,nb;

cout<<"no. of elements in array 1 and array 2: ";
cin>>na>>nb;
cout<<endl;
int j,i;
cout<<"Enter elements of array 1: ";
for(i=0;i<na;i++)
cin>>a[i];

cout<<"Enter elements of array 2: ";
for(i=0;i<nb;i++)
cin>>b[i];

intersectionOfArray(a,b,na,nb);
cout<<"Intersection of array : "<<endl;
return 0;
}
