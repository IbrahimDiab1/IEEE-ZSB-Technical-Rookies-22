/*https://www.hackerrank.com/challenges/drawing-book/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main ()
{
    int n,p,c=0;
    cin >>n>>p;
    if (p<=(n/2))
        printf("%d",p/2);
    else
    if((n%2)==0)
        printf("%d",(n-p+1)/2);
    else
        printf("%d",(n-p)/2);

}

