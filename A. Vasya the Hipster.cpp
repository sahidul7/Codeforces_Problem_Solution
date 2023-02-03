/*A. Vasya the Hipster
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output*/

//By Sahidul_7, contest: Codeforces Round #322 (Div. 2), problem: (A) Vasya the Hipster, Accepted
/* Author: Md Sahidul Islam */


#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int a,b;
    cin>>a>>b;
    if(a>b)cout<<b<<" ";
    else cout<<a<<" ";
    int ans=abs(a-b)/2;
    cout<<ans;
}
