/*
A. Stones on the Table
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/

//By Sahidul_7, contest: Codeforces Round #163 (Div. 2), problem: (A) Stones on the Table, Accepted

/* Author: Md Sahidul islam */


#include<iostream>
#include<string>
using namespace std;
 
int main()
{ int x;
int count=0;
cin>>x;
    string s;
    
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
      if(s[i]==s[i+1]){
        count++;
      }
     
        
}
 cout<<count;
}
