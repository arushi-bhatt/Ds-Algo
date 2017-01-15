int* helper(int n){
    int arr[20];
    if(n==1){
        arr[0]=1;arr[1]=0;
        cout<<"1"<<endl;
        return arr;
    }
    else {
        int *a;
        a=helper(n-1);int k=-1;
        int arr[20];

        for(int i=0;a[i]!=0;i++){
            int count=1;
            while(a[i+1]==a[i]){
                i++;
                count++;
            }
            arr[++k]=count;
            arr[++k]=a[i];


        }arr[++k]=0;
        for(k=0;arr[k]!=0;k++)
            cout<<arr[k];
        cout<<endl;
        return arr;
    }



}


void printPattern(int n) {
    helper(n);

}
