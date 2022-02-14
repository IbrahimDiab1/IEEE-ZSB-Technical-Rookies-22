/*2- You have a sequence of letters that is repeated infinitely. Print the number of
r's in the first n letters.
Input:
The first line represents the sequence of letters
The second line represents n.*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){

int n,count=0;
string s;
cin>>s>>n;

for (int j=0,i=0;i<n;i++,j++)
{
    if (j==s.size())
        j=0;
    if (s[j]=='r')
        count++;
}
printf("%d",count);

}
