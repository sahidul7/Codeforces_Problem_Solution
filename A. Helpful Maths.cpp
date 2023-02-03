/* 
A. Helpful Maths
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/




//By Sahidul_7, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Accepted;

/* Author: Md Sahidul Islam  */

#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}
