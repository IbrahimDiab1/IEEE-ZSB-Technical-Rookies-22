/*https://www.hackerrank.com/challenges/between-two-sets/problem*/



#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{

    int a,b,counter=0;
    cin>>a>>b;
    int arr_a[a],arr_b[b];
    char flag_a,flag_b;
    for (int i=0; i<a; i++)
        cin>>arr_a[i];
    for (int i=0; i<b; i++)
        cin>>arr_b[i];
    for(int i=1; (arr_a[a-1]*i)<=arr_b[0]; i++)
    {
        flag_a=flag_b=0;
        for(int j=0; j<a; j++)
        {
            if(((arr_a[a-1]*i)%(arr_a[j]))!=0)
            {
                flag_a=1;
                break;
            }
        }
        for(int j=0; j<b; j++)
        {
            if((arr_b[j]%(arr_a[a-1]*i))!=0)
                flag_b=1;
            break;
        }
        if(!(flag_a||flag_b))
            counter++;
    }
    printf("%d",counter);
}
