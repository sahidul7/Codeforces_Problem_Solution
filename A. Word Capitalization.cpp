/*
A. Word Capitalization
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Round #172 (Div. 2), problem: (A) Word Capitalization, Accepted;

/* Author: Md Sahidul Islam */

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    s[0] = towupper(s[0]);
    cout << s << endl;
    return 0;
}
