#include<cmath>
int CountNoOfWhiteHats(int arr[],int n) {
    int i;
    int sno,lno,stime=0,ltime=0;
    sno=lno=-INFINITY;
    for(i=0;i<n;i++){
        if(arr[i]>sno){
             if(arr[i]>=lno){
                 if(arr[i]!=lno){
                    sno=lno;
                    lno=arr[i];
                  }
             }
             else sno=arr[i];
        }
        if(lno==arr[i])
            ltime++;
        if(sno==arr[i])
            stime++;
    }


        if(ltime+stime==n){
            if(stime==0){
                if(lno!=0)
                    return lno+1;
                else return 0;
            }
            if(stime==lno && stime >0)
                return sno+1;
        }



    return -1;
}
