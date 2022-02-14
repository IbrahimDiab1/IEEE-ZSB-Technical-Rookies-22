/*https://www.hackerrank.com/challenges/counting-valleys/problem*/


#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;


int main ()
{
int steps,counter=1;
cin>> steps;
string in;
cin >>in;
for(int i=0;i<in.size();i++)
{
 if (in[i]=='U')
    counter++;
else
    counter --;
}
printf("%d",counter);
}

