/*
A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/




//By Sahidul_7, contest: Codeforces Beta Round #85 (Div. 2 Only), problem: (A) Petya and Strings, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int i;
    cin>>a>>b;
    for(i=0; i<a.size(); i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }
    if(a==b)
        cout<<"0"<<endl;
    else
    {
        for(i=0; i<a.size(); i++)
        {
            if(a[i]<b[i])
            {
                cout<<"-1"<<endl;
                break;
            }
            if(a[i]>b[i])
            {
                cout<<"1"<<endl;
                break;
            }
        }
    }
}
