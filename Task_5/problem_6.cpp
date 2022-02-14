/*6. You are given a number that contains 4 digits with at least two distinct digits.
Your program should perform the following routine on the number: Arrange the
digits in descending order and in ascending order (adding zeros to fit it to a
4-digit number), and subtract the smaller number from the bigger number. Then
repeat the previous step. Performing this routine will always cause you to reach a
fixed number: 6174. Your program should return the number of times this routine
must be performed until 6174 is reached. For example, if num is 3524 your
program should return 3 because of the following steps:
(1) 5432 - 2345 = 3087
(2) 8730 - 0378 = 8352
(3) 8532 - 2358 = 6174 */


#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int des_order();
int asc_order();
void array_sorted(int n);
int arr_sorted[4];

int main()
{

    int input,temp,counter=0;
    cin>>input;
    temp=input;
    while(temp!=6174)
    {
        array_sorted(temp);
        temp =asc_order()-des_order();
        counter++;
    }
    printf("%d",counter);
}

int des_order()
{
    int temp=0;
    for(char i=0; i<4; i++)
    {
        temp+=arr_sorted[i];
        temp*=10;
    }
    return temp/10;
}

int asc_order()
{
    int temp=0;
    for(char i=4; i>0; i--)
    {
        temp+=arr_sorted[i-1];
        temp*=10;
    }
    return temp/10;
}

void array_sorted(int n)
{
    for(char i=0; i<4; i++)
    {
        arr_sorted[i]=(n%10);
        n/=10;
    }

    for(char i=1; i<4; i++)
    {
        int key = arr_sorted[i];
        int j = i - 1;

        while (key < arr_sorted[j] && j >= 0)
        {
            arr_sorted[j + 1] = arr_sorted[j];
            --j;
        }
        arr_sorted[j + 1] = key;
    }
}
