

/* Given an array of random numbers, push all the zeros of a given array to the
end of the array. For example,
Input : {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}
Output : {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}.
The order of all other elements should be same. */

#include<iostream>
#include<cmath>
using namespace std;



/*___________________version 1(working, but it exceeds time limit)_______________________________
void Rotate(int arr[],int start,int d,int n){
            int i,j,k,nt,temp;

            i=start;
            while (d>0){
                i=n;
                nt=arr[n];
                temp=arr[n];
                for(i=n;i>start;i--){
                    nt=temp;
                    temp=arr[i-1];
                    arr[i-1]=nt;
                }
                if(i==start)
                    arr[n]=temp;
                d--;
            }
            cout<<endl;
}
___________________________________________________________________

int main()
{
    int arr[20],n;
    cout<<"no. of elements : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements : ";
    int i,j,k;
    for(i=0;i<n;i++)
    cin>>arr[i];

    for(i=0,j=n-1;i<j;){
        if(arr[i]!=0)
            i++;
        else if(arr[i]==0){
                int co=0;
                while(arr[i]==0&&i<n){
                        co++;
                        i++;
                    }

                if(i!=n)Rotate(arr,i-co,co,i);
                else break;

                i=i-co+1;}

    }
    cout<<endl<<"sorted array : "<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/
