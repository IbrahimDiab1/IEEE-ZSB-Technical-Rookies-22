/*
6. https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem
*/

#include <iostream>
#include "read_line_array.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.get();
    vector<int> arr = read_line_array<int>();
    int runner1=arr[0],runner2=-100;
    for (int i=0; i<n; i++)
        if(runner1<arr[i])
            runner1=arr[i];

    for(int i=0; i<n; i++)
        if(arr[i]>runner2 && arr[i]!=runner1)
            runner2=arr[i];
    printf("%d",runner2);
}
