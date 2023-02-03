/* A. I Wanna Be the Guy
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output */

//By Sahidul_7, contest: Codeforces Round #268 (Div. 2), problem: (A) I Wanna Be the Guy, Accepted;

/* Author: Md Sahidul Islam */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;
 
    for(int i =  0 ; i < p ; i++){
        cin >> array[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i];
    }
 
    sort(array , array+(p+q));
 
    for(int i = 0 ; i < p+q ; i++){
        if(array[i] != array[i+1]){
            count++;
        }
    }
 
    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
 
    return 0;
}
