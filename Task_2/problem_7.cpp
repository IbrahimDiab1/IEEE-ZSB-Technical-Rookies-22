/*
7. https://www.hackerrank.com/challenges/find-a-string/problem
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string original,sub;
    int counter;
    getline(cin, original);
    getline(cin, sub);
    for (int i=0; i<original.length(); i++)
        if(original[i]==sub[0])
        {
            int flag=1;
            for(int j=1; j<sub.length(); j++)
            {
                if(original[i+j]!=sub[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                counter++;
        }
    cout<<counter;
}
