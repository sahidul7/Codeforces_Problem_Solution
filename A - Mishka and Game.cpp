/*
A. Mishka and Game
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output

*/

//By Sahidul_7, contest: Codeforces Round #365 (Div. 2), problem: (A) Mishka and Game, Accepted;

/* Author: Md Sahidul Islam */
#include <iostream>
using namespace std;
int a, n, m, mis, cri;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> n >> m;
        if (n > m) {
            mis++;
        } else if(n < m) {
            cri++;
        }
    }
    if (mis > cri) {
        cout << "Mishka";
    } else if (cri > mis) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
}
