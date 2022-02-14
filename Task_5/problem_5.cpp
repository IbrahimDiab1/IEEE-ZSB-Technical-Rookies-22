/*https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem*/


#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
int num,temp,max,min,counter1=0,counter2=0;
cin>>num;
cin>>temp;
max=min=temp;
while(--num){
    cin>>temp;
    if (temp>max)
       {
        max=temp;
        counter1++;
       }
    if(temp<min)
    {
        min=temp;
        counter2++;
    }
}
cout<<counter1<<" "<<counter2;
}
