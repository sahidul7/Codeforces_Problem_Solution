/* A. Soft Drinking
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Round #107 (Div. 2), problem: (A) Soft Drinking, Accepted;

/* Author: Md Sahidul Islam */

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}
