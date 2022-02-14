/*1.You have n (n > 1) bottles of water, each bottle is described by remaining
volume of water and capacity. You should determine if you can pour all
remaining water into just 2 bottles.
Input:
The first line is n(number of bottles)
The next n lines contain 2 space-separated integers (remaining volume and
capacity)
Output:
print "Yes" if you can pour all the water into 2 bottles, otherwise print "No".*/



#include<iostream>
#include <string.h>
using namespace std;

int main()
{

    int num_bottles,temp,volume=0,max_capacity=0,sec_max=0;
    cin>>num_bottles;
    if(num_bottles>2)
    {
        for(int i=0; i<num_bottles; i++)
        {
            cin>>temp;
            volume+=temp;
            cin>>temp;
            if(max_capacity<temp)
            {
                sec_max=max_capacity;
                max_capacity=temp;
            }
            else if(sec_max<temp)
                sec_max=temp;
        }

        if(volume<=(max_capacity+sec_max))
            printf("yes");
        else
            printf("no");
    }
    else
        printf("yes");

}
