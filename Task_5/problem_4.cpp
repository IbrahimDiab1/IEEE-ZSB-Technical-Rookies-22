/*https://www.hackerrank.com/challenges/kangaroo/problem*/


#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    int time=0;
    time=(x2-x1)/(v1-v2);
    if(time>=1)
        return "YES";
    else
        return "NO";
}



int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,v1,x2,v2);
}
