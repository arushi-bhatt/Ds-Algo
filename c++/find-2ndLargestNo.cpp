// Find second largest element in an array.

#include<iostream>
#include<cmath>
using namespace std;

int FindSecondLargest(int arr[], int n){
    if(n<=1)
        return -INFINITY;
	int max1,max2;
	int i;
	max1=max2=arr[0];
	for(i=1;i<n;i++){
        //if current element is >max2 , but should not be equal to max1 again
	    if(arr[i]>max2 && arr[i]!=max1){
        //if current element is also > max1
	        if(arr[i]>=max1){
	            max2=max1;
                max1=arr[i];
	        }
	        else max2=arr[i];
	    }
	}
	return max2;
}


int main(){
//n=no.of elements

    int n;
    cout<<"no. of elements: ";
    cin>>n;

    cout<<endl;
    cout<<"Enter elements : ";
    int i;
    int *arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl<<"second largest no. : "<<FindSecondLargest(arr,n);
    return 0;
}
