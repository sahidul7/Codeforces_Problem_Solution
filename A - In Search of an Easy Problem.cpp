/* A. In Search of an Easy Problem
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Technocup 2019 - Elimination Round 1, problem: (A) In Search of an Easy Problem, Accepted;

/* Author: Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int n;
    cin>>n;
    int flag=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<n;i++){
        if(v[i]!=0){
        flag=1;
        break;
        }
         //break;
    }
    if(flag==1){
        cout<<"HARD"<<endl;
    }
    if(flag==0)
    {
        cout<<"EASY"<<endl;
    }
    }
