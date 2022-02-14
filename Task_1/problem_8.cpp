/*

8- Write a guessing game. The program will generate a random number between
1 and 10 and ask the user to guess a number between 1 and 10. If they don't
make the correct guess the program will ask them to enter another number and
so on. Until they get it right, the program will print the number of the tries they
needed to answer correctly
see image: https://ibb.co/QkDT1km

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
srand(time(0));
int tries,temp;
int random =(rand() % 10) + 1;
do{
    cin>>temp;
    tries++;
    if(temp==random)
        cout<<"Yay you got it in "<<tries<<" tries";
    else
        cout<<"Wrong guess\n";
}while(temp!=random);
}
