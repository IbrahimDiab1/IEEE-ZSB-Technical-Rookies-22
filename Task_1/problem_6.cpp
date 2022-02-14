/*5/

6- Write a program that asks the user for a number n and prints the sum of the
numbers 1 to n inclusive.n will always be greater than 1.

*/

#include <iostream>
using namespace std;

int main(){
int n,sum;
cin>>n;
if(n>1){
while(n>0)
sum+=n--;
cout<<sum;
}}
