/*3. Write a program that generates a password which consists of 10
characters (numbers, lowercase letters, uppercase letters and other characters).
It should contain at least 1 number and at least 1 of these characters [@, #, $, %, &]*/



#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

char pass[10];

int main(){

srand(time(0));
for(int i=0;i<10;i++){
char temp;
char flag_num=0,flag_mark=0;

for (int i=0;i<10;i++){

    do
    temp=rand()%10;
    while(pass[temp]!=0);


    if(flag_num!=1 || ((rand()%10)+1)>8)
    {
        flag_num=1;
        pass[temp]=48 + rand()%10;
    }
    else if(flag_mark!=1 || ((rand()%10)+1)>8)
    {
        flag_mark=1;
        pass[temp]=35 + rand()%4 ;
    }
    else
    pass[temp]=64 + rand()%27;
}
for(int i=0;i<10;i++){
printf("%c",pass[i]);
pass[i]=0;}
printf("\n");
}}
