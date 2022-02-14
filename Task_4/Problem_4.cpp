/*https://www.hackerrank.com/challenges/library-fine/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
int d1,d2,m1,m2,y1,y2;
cin>>d1>>m1>>y1;
cin>>d2>>m2>>y2;

if(y1!=y2)
    cout<<"10000";
else
    if(m1!=m2)
        printf("%d",(m1-m2)*500);
        else
            printf("%d",(d1-d2)*15);
}
