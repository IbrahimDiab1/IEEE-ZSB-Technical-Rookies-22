/*
4. Find the minimum distance between 2 similar numbers in a list.
distance means -> the absolute difference between 2 indexes.*/

#include <iostream>
#include "read_line_array.h"
using namespace std;

int main(){

vector<int> arr = read_line_array<int>();
int distance=arr.size();
int temp;
for (int i=0,j=0;i<arr.size()-1;i++){
    j=i+1;
    temp=0;
    while(j<arr.size()){
        temp++;
        if(arr[i]==arr[j++])
           break;
    }
    if(arr[i]==arr[j-1])
    if (temp<distance)
        distance =temp;
       if (distance ==1)  //to increase the performance
        break;
}
printf("%d",distance);

}
