/*
Weird Number Pattern
Given number of rows, print the given pattern -

1
11
21
1211
111221

Explanation -

Row 1 - Number 1
Row 2 - count of 1 in Row 1 & 1 itself
Row 3 - count of 1 in Row 2 & number 1 itself
Row 4 - count of 2 in Row 3 & number 2 itself, then count of 1 in Row 3 and number 1 itself
and so on...

That means, in every row, you need to print - count of consecutive entries of an element (in previous row) and the element itself.

Input format : N (total number of rows)

Output format : Pattern in N lines
Sample Input 1 :

3

Sample Output 1 :

1
11
21

Sample Input 2 :

5

Sample Output 2 :

1
11
21
1211
111221

*/
int* helper(int n){
    //base condition
    int arr[20];//temporary array for current row no.
    if(n==1){
        arr[0]=1;
        arr[1]=0;//0 at the end is used as a terminator of every row
        cout<<"1"<<endl;
        return arr;
    }
    //if n>1
    else {
        int *a;
        a=helper(n-1);//a points to the array returned by the function helper

        int k=0;//k is counter for the current row no. array

        int arr[20];//temporary array for current row

        //traverse through previous array and form current row array on the basis of it
        for(int i=0;a[i]!=0;i++){
            //count keeps track of the no. consecutive same elements
            int count=1;
            while(a[i+1]==a[i]){
                i++;
                count++;
            }
        //assign the record for one distinct element
            arr[k++]=count;
            arr[k++]=a[i];
        }
        arr[k++]=0;//0 at the end is used as a terminator of every row
        //print current row
        for(k=0;arr[k]!=0;k++)
            cout<<arr[k];
        cout<<endl;
        //return current row
        return arr;
    }
}


void printPattern(int n) {
    helper(n);

}
