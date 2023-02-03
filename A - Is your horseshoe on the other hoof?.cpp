/*
A. Is your horseshoe on the other hoof?
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
*/
//By Sahidul_7, contest: Codeforces Round #141 (Div. 2), problem: (A) Is your horseshoe on the other hoof?, Accepted;

/* Author: Md Sahidul Islam */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int s1,s2,s3,s4,count=0;
  cin>>s1>>s2>>s3>>s4;
            if(s1==s2||s1==s3){
                count++;
            }
           
              if (s2==s3||s2==s4) {
             count++;
            }
             if (s3==s4||s1==s4){
           
                count++;
            }
          
 
        
      cout<<count;
}
