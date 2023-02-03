/*
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/

//By Sahidul_7, contest: Codeforces Beta Round #77 (Div. 2 Only), problem: (A) Football, Accepted;

/* Author: Md Sahidul Islam */

#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    int x = 0,y = 0,z = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            x++;
            y = 0;
        }
        else
        {
            y++;
            x = 0;
        }
        if(x==7 || y==7)
        {
            z = 1;
        }
    }
    if(z == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
