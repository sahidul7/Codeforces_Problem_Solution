/*
B. Best Permutation
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidul_7, contest: Educational Codeforces Round 135 (Rated for Div. 2), problem: (B) Best Permutation, Accepted;

/* Author: Md Sahidul Islam */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
int main()
{
    long long testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        if(n%2==0){
            for(int i=n-2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n<<endl;
        }
        else{
            cout<<1<<" "<<2<<" "<<3<<" ";
            for(int i=n-2;i>=4;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}
