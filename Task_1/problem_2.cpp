/*

2- Write a program that asks the user to input a number, n > 1 and prints all 
prime numbers from 1 to n inclusive. The output numbers should be on one line
with a space separating between them. 

*/

#include <iostream>
using namespace std;

int is_prime (int num);
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(is_prime(i))
            printf("%d ",i);
    }
}



int is_prime (int num)
{
if(num<2)
return 0;
else{
    for(int i=2;i<=(num/2);i++){
        if ((num%i==0)&&(i!=num))
            return 0;

    }
    return 1;
    }}
