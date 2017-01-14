/*
Tower of Hanoi
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :

1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk.

Return the number of steps required to move all the disks from source to destination.
Sample Input :

3

Sample Output :

7

** I have also shown the series of steps involving movement of one disc at a time
*/

#include<iostream>
using namespace std;

int towerOfHanoi(int n, char source, char auxiliary, char destination) {
    //if number of discs more than 0
    if(n>0){
        // total steps involved in moving n-1 discs from A to B using C
        int a= towerOfHanoi(n-1,source,destination,auxiliary);
        //only one step involved in moving the last disc from A to C
        cout<<"Move a disc from "<<source<<" to "<<destination<<endl;
        //// total steps involved in moving n-1 discs from B to C using A
        int b=towerOfHanoi(n-1,auxiliary,source,destination);
        //return total of all above steps
        return a+1+b;
    }
    //when there is no disc i.e. base condition
    else return 0;
}
int main(){
    cout<<"\t Tower of Hanoi "<<endl;
    cout<<"enter no. of discs : ";
    int n;
    cin>>n;
    cout<<"Total no. of steps : "<<towerOfHanoi(n,'A','B','C');
return 0;}




