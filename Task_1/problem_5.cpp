/*

5- Write a program that contains three functions that compute the sum of the
numbers in a list. The first function uses for loop, the second function uses while
loop and the third function uses recursion.
Input:
2 lines, the first contains integer, n, representing the size of the list (how many
numbers in the list)
The second consists of n space-separated integers, representing the numbers in
the list
Output:
The output should be on three lines: the first line is the output of the first function,
the second is for the second function and the third is for the third function.

*/

#include <iostream>
#include "read_line_array.h"
using namespace std;

int add_for (vector<int> arr,int n);
int add_while (vector<int> arr,int n);
int add_recursion (vector<int> arr,int n);

int main()
{
    int n;
    cin>>n;
    cin.get();
    vector<int> arr = read_line_array<int>();

    cout<< add_for(arr,n)<<"\n";
    cout<< add_while(arr,n)<<"\n";
    cout<< add_recursion(arr,n);
}

int add_for (vector<int> arr,int n)
{
    int sum;
    for (; n>0; n--)
        sum+=arr[n-1];
    return sum;
}

int add_while (vector<int> arr,int n)
{
    int sum;
    while (n!=0)
    {
        sum+=arr[--n];
    }
    return sum;
}

int add_recursion (vector<int> arr,int n)
{

    while(n!=0)
        return arr[n-1]+add_recursion(arr,--n);

return 0;
}
