/*https://www.hackerrank.com/challenges/find-digits/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int find_digits(int in)
{
    int temp=in,count=0;
    while(temp!=0)
    {
        if(temp%10==0)
        {
            temp/=10;
            continue;
        }
        if(in%(temp%10)==0)
            count++;
        temp/=10;
    }
    return count;
}

int main()
{
    int t,in,temp;
    int arr[15];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>temp;
        arr[i]=find_digits(temp);
    }
    for(int i=0; i<t; i++)
        printf("%d\n",arr[i]);
}
