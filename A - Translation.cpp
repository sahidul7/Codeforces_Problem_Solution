/* A. Translation
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Beta Round #40 (Div. 2), problem: (A) Translation, Accepted;


/* Author : Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
int main(){
 
  string s;
  string s2;
  cin>>s;
  cin>>s2;
 reverse(s2.begin(),s2.end());
 if(s==s2)cout<<"YES";
 if(s!=s2)cout<<"NO";
 //sahidul7;
}
