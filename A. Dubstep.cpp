/*A. Dubstep
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output*/

//By Sahidul_7, contest: Codeforces Round #130 (Div. 2), problem: (A) Dubstep, Accepted,

/* Author: Md Sahidul Islam */



#include <iostream>
using namespace std;
 
int main() {
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
	return 0;
}
