#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define coutd cout<<fixed<<setprecision(10)//coutd<<res<<endl;
#define endl "\n"
using namespace std;
int main(){
    
 
   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c1=0,c2=0;
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            if(l==k)c1++;
            if(r==k)c2++;
        }
        if(c1>0&&c2>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
