/* A. Anton and Letters
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Round #253 (Div. 2), problem: (A) Anton and Letters, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='{}' || s[i]==',' || s[i]==' ')
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    count++;
                }
            }
    }
    cout<<count-1;
}
