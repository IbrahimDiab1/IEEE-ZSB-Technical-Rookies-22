/*https://www.hackerrank.com/challenges/find-a-string/problem*/

#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{

    int counter=0;
    string original,sub;
    cin>>original>>sub;

    for(int i=original.size()-1; i>=0; i--)
    {
        if(original[i]==sub[sub.size()-1])
        {
            int j=0,flag=0;
            while((sub.size()-j++))
            {
                if(sub[sub.size()-j]==original[i-j+1])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }

            }
            if(flag)
                counter++;
        }
    }
    cout<<counter;

}
