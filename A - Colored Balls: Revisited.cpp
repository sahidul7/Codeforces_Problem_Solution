/*
A. Colored Balls: Revisited
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidul_7, contest: Educational Codeforces Round 135 (Rated for Div. 2), problem: (A) Colored Balls: Revisited, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int A=0;
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[A]){
                A=i;
            }
        }
        cout<<A+ 1<<endl;
    }
}
