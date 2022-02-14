/*1- Find the minimum distance between 2 similar numbers in a list.
distance means -> the absolute difference between 2 indexes*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){

int n,temp;
cin>>n;
int count =n;
int arr[n];
for (int i=0;i<n;i++)
    cin>>arr[i];
for (int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
            if((j-i)<count)
            count=j-i;
}}
printf("%d",count);
}
