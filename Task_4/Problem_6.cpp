/*https://www.hackerrank.com/challenges/chocolate-feast/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int chocolateFeast(int n,int c,int m)
{
    int count=n/c,r_ch=count,r_w=0;

    while((r_ch!=0)||(r_w>m))
    {
        r_w+=r_ch;
        r_ch=r_w/m;
        r_w%=m;
        count+=r_ch;
    }
    return count;
}

int main()
{
    int arr[1000]= {0};
    int t,temp,n,c,m;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>c>>m;
        arr[i]=chocolateFeast(n,c,m);
    }
    for(int i=0; i<t; i++)
        printf("%d\n",arr[i]);

}
