
/*

B. Queue at the School
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/


/*Only those who endure patiently will be given their reward without limit.*/
 
 
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define coutd cout<<fixed<<setprecision(10)//coutd<<res<<endl;
#define endl "\n"
 
using namespace std;
int main(){
   {
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout << s << endl;
    return 0;
}
 
 
return 0;
}
 
/*
 
*/
