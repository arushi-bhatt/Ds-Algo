// Find second largest element in an array.

#include<iostream>
using namespace std;

int FindSecondLargest(int arr[], int n){
	int max1,max2;
	int i;
	max1=max2=arr[0];
	for(i=1;i<n;i++){
	    if(arr[i]>max2){
	        if(arr[i]>max1){
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

}
