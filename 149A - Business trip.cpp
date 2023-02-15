/*


A. Business trip
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/
//By Sahidul_7, contest: Codeforces Round #106 (Div. 2), problem: (A) Business trip, Accepted, #, ;

/* Author: Md Sahidul Islam */

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k;
    cin >> k;
    int total=0;
    vector<int>v(12);
    for (int  i = 0; i < 12; ++i)
    {
        cin >> v[i];
        total += v[i];
    }
 
    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(v.begin(),v.end(), greater<int>());
        int sum = 0;
        int month = 0;
        while (sum < k)
        {
            sum += v[month];
            month += 1;
        }
        cout << month << endl;
    }
 
    return 0;
}
