/*
A. Plus or Minus
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define coutd cout<<fixed<<setprecision(10)//coutd<<res<<endl;
#define endl "\n"
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
     
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)!=c)
        cout<<'-'<<endl;
    
    else cout<<'+'<<endl;
    
    }
  return 0;
}
