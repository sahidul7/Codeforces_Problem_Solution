/*A. Tram
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output*/

//By Sahidul_7, contest: Codeforces Beta Round #87 (Div. 2 Only), problem: (A) Tram, Accepted

/* Author: Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n, a, b, c=0, m=0;
    scanf("%d", &n);
    while (n-->0)
    {
       cin>>a>>b;
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }
 
    cout<<m;
    return 0;
}
