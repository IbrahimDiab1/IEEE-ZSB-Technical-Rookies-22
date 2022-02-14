/*
https://www.hackerrank.com/challenges/diagonal-difference/problem
*/

#include<iostream>
#include <math.h>
using namespace std;




int main()
{

    int n,left=0,right=0;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>> arr[i][j];
            if( i==j)
                left+=arr[i][j];
        }

    for(int j=0,i=n-1; i>=0; i--)
        right+=arr[j++][i];
    cout<<abs(right-left);

}










