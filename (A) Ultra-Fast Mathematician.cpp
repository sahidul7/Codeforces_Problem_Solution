/*
A. Ultra-Fast Mathematician
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidul_7, contest: Codeforces Beta Round #57 (Div. 2), problem: (A) Ultra-Fast Mathematician, Accepted;

/* Author:  Md Sahidul Islam */

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (size_t i = 0; i < s1.length(); ++i)
    {
        if (s1[i] == s2[i])
        {
            s1[i] = '0';
        }
        else
        {
            s1[i] = '1';
        }
    }
    cout << s1 << endl;
    return 0;
}
