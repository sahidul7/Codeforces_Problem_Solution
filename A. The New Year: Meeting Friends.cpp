/*A. The New Year: Meeting Friends
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output*/


//By Sahidul_7, contest: Codeforces Round #375 (Div. 2), problem: (A) The New Year: Meeting Friends, Accepted

/*Author:Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(3);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a=abs(v[0]-v[1]);
    int b=abs(v[1]-v[2]);
    int ans=a+b;
    cout<<ans<<endl;
}

