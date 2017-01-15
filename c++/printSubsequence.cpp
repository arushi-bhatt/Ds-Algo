void helper(char arr[], int si){
    if(arr[si]='\0'){
        cout<<" "<<endl;
        return;
    }
     helper(arr,si+1);
    int i;
   for(i=si;arr[i]!='\0';i++){
        cout<<arr[i];
    }
    cout<<endl;


}
void printSubsequences(char input[]) {
    helper(input,0);

}
