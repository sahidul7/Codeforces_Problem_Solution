/*A. Anton and Danik
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Round #379 (Div. 2), problem: (A) Anton and Danik, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
#include<string>
using namespace std;
 
int main()
{ int x;
cin>>x;
int count=0;
int count1=0;
 
    string s;
    
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
      if(s[i]=='A'){
        count++;
      }
     else{
      count1++;
     }
        
}
 if(count>count1)cout<<"Anton";
 if(count<count1)cout<<"Danik";
 if(count==count1)cout<<"Friendship";
 
 
}

