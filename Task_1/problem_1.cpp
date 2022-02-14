/*

1- Write a program that calculates the area and the perimeter of a rectangle. The 
program asks the user for two numbers, each number on a separate line. One of 
the numbers represents the length and the other represents the width. 

*/

#include <iostream>
using namespace std;

int main(){
int l,w;
cin>>l>>w;
cout<<l*w<<"\n"<<(2*(l+w));
}
