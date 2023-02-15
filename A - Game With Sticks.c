/*
A. Game With Sticks
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output


*/
 //By Sahidul_7, contest: Codeforces Round #258 (Div. 2), problem: (A) Game With Sticks, Accepted, #, Copy;

/* Author: Md Sahidul Islam */

#include<stdio.h>
int main(){
    int x,y;
    int count=0;
    scanf("%d %d",&x,&y);
    while((x!=0)&&(y!=0)){
        x--;
        y--;
        count++;
    }
    if(count%2==0){
        printf("Malvika");
    }
    if(count%2!=0){
        printf("Akshat");
    }
    
 
}
