/*

1. Write a program that asks the user for a string and tests whether it's a
palindrome. If it's a palindrome print “yes”, if not, print “no”.

*/
#include<iostream>
#include <string.h>
using namespace std;

int main(){

string s;
int flag=1;
cin>>s;
for(int i=0;i<s.length()/2;i++)
{
    if(!(s[i]==s[s.length()-i-1]))
        flag=0;
}
if(flag)
    cout<<"yes";
else
    cout<<"No";
}
