//sort array of elements having '0 and 1 ' only

#include<iostream>
#include<cmath>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void sort012(int arr[], int n)  {

	// Write your code here
    int i,j,k;

    //initialize i and k with starting index and j with last index
    // before i , all elements are zero
    //after j ,all elements are 2
    //k will represent the current element
    //important : k=1 initially

    for(i=0,j=n-1,k=1;k<j;)
    {
        cout<<i<<j<<k<<endl;

        if(arr[k]==0)
            {swap(arr[i],arr[k]);
             i++;}

        else if(arr[k]==2)
            {swap(arr[k],arr[j]);
            j--;}

        else  k++;
    }
    cout<<i<<j<<k;
}
int main()
{
    int arr[20],n;
    cout<<"no. of elements : ";
    cin>>n;
    cout<<endl;

    cout<<"Enter elements : ";
    int i;
    for(i=0;i<n;i++)
        cin>>arr[i];

    sort012(arr,n);

    cout<<endl<<"sorted array : "<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}


//correct solution
// arr - input array
// n - size of array
void swap(int &a , int &b){
    int temp= a;
    a=b;
    b=temp;
}


void sort012(int arr[], int n)  {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */
     int i,j,k;
    for(i=0,j=-1,k=n-1;i<=k;){
        if(arr[i]==0){
            swap(arr[i],arr[j+1]);
            i++;j++;

        }
        else if(arr[i]==1){
            i++;
        }
        else {
            swap(arr[i],arr[k]);
            k--;
        }
    }
}
