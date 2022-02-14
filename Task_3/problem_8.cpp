/*https://www.hackerrank.com/challenges/sock-merchant/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int num,counter=0;
    int arr[100];
    int temp[100];
    cin>>num;
    for(int i=0; i<num; i++)
        cin>>arr[i];
    for(int i=0; i<100; i++)
        temp[i]=0;
    for(int i=0; i<num; i++)
        temp[arr[i]]++;
    for(int i=0; i<100; i++)
        if(temp[i])
            counter+=(temp[i]/2);
    cout<<counter;
}
