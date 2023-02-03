/*
A. Puzzles
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/
// By Sahidul_7, contest: Codeforces Round #196 (Div. 2), problem: (A) Puzzles, Accepted;
/* Author: Md Sahidul Islam  */

#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int least = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < least)
        {
            least = f[i+n-1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}

