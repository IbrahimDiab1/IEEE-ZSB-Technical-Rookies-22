/*

 Write a program that takes a sentence and prints it, word per line, in a
rectangular frame.
see: https://ibb.co/sWrTqyc

*/

#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int numOfLongestWord(string s);

int main()
{
    int i=0;
    string s;
    getline (cin,s);
    int longest=numOfLongestWord(s);
    for(int i=0; i<longest+2; i++)
        printf("*");
    printf("\n");
    while((s[i]!='\0'))
    {
        printf("*");
        for(int j=0; j<longest; j++)
        {
            if(s[i]!=' ')
                printf("%c",s[i++]);
            else
                printf(" ");
        }
        i++;
        printf("*\n");
    }
    for(int i=0; i<longest+2; i++)
        printf("*");

    return 0;
}

int numOfLongestWord(string s)
{
    int i,longest=0,temp;
    while(i<s.length())
    {
        while (s[i++]!=' ')
        {
            ++temp;
            if((s[i]=='\0'))
                break;
        }
        if (temp>=longest)
            longest =temp;
        temp=0;
    }
    return longest;

}


