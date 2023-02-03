/*
A. Do Not Be Distracted!
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

// By Sahidul_7, contest: Codeforces Round #719 (Div. 3), problem: (A) Do Not Be Distracted!, Accepted;
/* Author: Md Sahidul Islam */

#include<iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin.ignore(256,'\n');
        getline(cin,str);
        map<char,int> mp;
        for (int i = 65; i <=97; ++i) {
            mp[i] = 0;
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (i!=0){
                if (str[i]!=str[i-1] && mp[str[i]]>0){
                    found = true;
                    cout<<"NO\n";
                    break;
                }
            }
            mp[str[i]]++;
        }
        if (!found){
            cout<<"YES\n";
        }
    }
}
