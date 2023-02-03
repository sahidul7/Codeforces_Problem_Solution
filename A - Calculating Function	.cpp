/*
A. Calculating Function
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidul_7, contest: Codeforces Round #277 (Div. 2), problem: (A) Calculating Function, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
 
using namespace std;
 
int main()
{
    long long int a, d;
    cin >> a;
    if(a%2 == 0)
    {
        cout << a / 2;
    }
    else
    {
        d = -(a / 2 + 1);
        cout << d;
    }
}
