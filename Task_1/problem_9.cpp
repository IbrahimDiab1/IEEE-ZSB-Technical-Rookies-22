/*

9- Write a program that takes input a number, n > 0 and generates the first n
fibonacci numbers.

*/

#include <iostream>
using namespace std;

int main() {
    int n, f_term = 0, sec_term = 1, next_term = 0;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << f_term<<" " ;
            continue;
        }
        if(i == 2) {
            cout << sec_term<<" ";
            continue;
        }
        next_term = f_term + sec_term;
        f_term = sec_term;
        sec_term = next_term;

        cout << next_term<<" ";
    }

    return 0;
}


