/*A. Division?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output */


//By Sahidul_7, contest: Codeforces Round #784 (Div. 4), problem: (A) Division?, Accepted
/* Author : Md Sahid Islam */


#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;
  cin>>x;
  vector<int>v(x);
  for(int i=0;i<x;i++){
    cin>>v[i];
  }
  for(int i=0;i<v.size();i++){
    if(v[i]>=1600&&v[i]<=1899){
      cout<<"Division 2"<<endl;
  }
  else if(v[i]>=1400&&v[i]<=1599){
      cout<<"Division 3"<<endl;
  }
  else if(v[i]<=1399){
    cout<<"Division 4"<<endl;
  }
  else if(v[i]>=1900){
    cout<<"Division 1"<<endl;
  }
}
}
