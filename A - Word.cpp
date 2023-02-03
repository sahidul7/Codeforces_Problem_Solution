/*
A. Word
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/

//By Sahidul_7, contest: Codeforces Beta Round #55 (Div. 2), problem: (A) Word, Accepted;

/* Author: Md Sahidul Islam */

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	int countup=0,countlow=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        countup++;
	    }else{
	        countlow++;
	    }
	}
	if(countup>countlow){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
