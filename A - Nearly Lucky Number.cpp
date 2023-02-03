/*
A. Nearly Lucky Number
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidu;l_7, contest: Codeforces Beta Round #84 (Div. 2 Only), problem: (A) Nearly Lucky Number, Accepted;

/* Author: Md Sahidul Islam */
#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
