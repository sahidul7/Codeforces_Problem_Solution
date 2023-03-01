 
/*Only those who endure patiently will be given their reward without limit.*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin);  freopen("output.txt", "w", stdout);
#define coutd cout<<fixed<<setprecision(10)//coutd<<res<<endl;
#define endl "\n"
using namespace std;
int main(){
 
    FAST;
    int t;
    cin>>t;
    string s="314159265358979323846264338327950288" ;
    while(t--){
        int c=0;
        string n;
        cin>>n;
        for(int i=0;i<s.length();i++){
            if(n[i]!=s[i]){
             break;
            }
            else c++;
        }
    cout<<c<<endl;
    }
return 0;
}
