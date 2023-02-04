/*
A. Vanya and Fence
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/
//By Sahidul_7, contest: Codeforces Round #355 (Div. 2), problem: (A) Vanya and Fence, Accepted;

/*Author: Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
  int n;
  int height;
  int count=0;
 
  cin>>n>>height;
  vector<int>v(n);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
   for(int i=0;i<v.size();i++){
    if(v[i]>height){
      count+=2;
    }
    else {
      count+=1;
    }
  }
  cout<<count<<endl;
}
