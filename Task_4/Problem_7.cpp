/*https://www.hackerrank.com/challenges/kaprekar-numbers/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
#include <math.h>

using namespace std;

int num_digits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

void kaprekarNumbers(int p, int q)
{
    for(int i=p; i<=q; i++)
        if((((int)pow(i,2)%(int)pow(10,num_digits(i)))+(((int)pow(i,2)/(int)pow(10,num_digits(i)))%(int)pow(10,num_digits(i))))==i)
            printf("%d ",i);
}

int main()
{
    int p,q;
    cin>>p>>q;
  kaprekarNumbers(p,q);
}
