/*

B. Grab the Candies
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
    while(t--){
    int n,m=0,b=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
 
    }
     for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            m+=v[i];
        }
        else{
            b+=v[i];
        }
 
    }
    if(m>b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 
}
  return 0;
}


