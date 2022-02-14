/*https://www.hackerrank.com/challenges/electronics-shop/problem*/

#include <stdlib.h>
#include<time.h>
#include <math.h>
#include<iostream>

using namespace std;

int main()
{
    int b,n1,n2,max_Cost=-1,c_cost=-1;
    cin>>b>>n1>>n2;
    int arr1[n1]= {0},arr2[n2]= {0};
    for(int i=0; i<n1; i++)
        cin>>arr1[i];
    for(int i=0; i<n2; i++)
        cin>>arr2[i];

    for (int i=0; i<n1; ++i)
    {
        for (int j=0; j<n2; ++j)
        {
            if (arr1[i]+arr2[j]<=b)
                c_cost=arr1[i]+arr2[j];
                max_Cost=max(max_Cost,c_cost);
        }
    }
    cout<<max_Cost;

}
