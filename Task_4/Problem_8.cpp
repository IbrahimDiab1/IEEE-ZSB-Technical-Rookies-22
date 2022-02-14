/*https://www.hackerrank.com/challenges/manasa-and-stones/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
#include <math.h>

using namespace std;
int temp[1000]= {0};

void stones(int n,int a,int b)
{
    int a1=min(a,b);
    int b1=max(a,b);
    temp[1000]= {0};
    temp[0]=(n-1)*a1;
    if(a==b)
        return;
    temp[n-1]=(n-1)*b1;
    for(int i=1; i<(n-1); i++)
        temp[i]=(i*b1)+((n-1-i)*a1);
}

int main()
{
    int arr[10][1000]= {0};
    int t,n,a,b;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        cin>>n>>a>>b;
        stones(n,a,b);
        if(a==b)
            n=1;
        for(int j=0; j<n; j++)
            arr[i][j]=temp[j];
    }
    for(int i=0; i<t; i++)
    {
        for(int j=0; arr[i][j]!=0; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

}
