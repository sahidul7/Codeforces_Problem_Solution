/*
A. Insert Digit
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output


*/

/*Only those who endure patiently will be given their reward without limit.*/
 
 
#include<bits/stdc++.h>
using namespace std;
 
 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define coutd cout<<fixed<<setprecision(10)//coutd<<res<<endl;
#define endl "\n"
void sol(){
    
 
    
 
long long n,k;
string a,b;
cin>>n>>k;
cin>>a;
 
int j=-1;
for(long long i=0;i<a.size();i++){
 
 if((a[i]-'0')<k){
  b+='0'+k;
j=i;
break;
 }
   b+=a[i];
  }
  if(j==-1)b+='0'+k;
  else{
    for(int i=j;i<a.size();i++){
      b+=a[i];
    }
  }
  cout<<b<<endl;
}
int main(){
    FAST;
   int t;
   cin>>t;
   while(t--)sol();
}
