/*

7- Modify the previous program such that only multiples of three or five are
considered in the sum.

*/
#include <iostream>
using namespace std;

int main(){
int n,sum;
cin>>n;
for(int i=3;i<=n;i++){
    if((i%3==0)||(i%5==0))
    sum+=i;
}
cout<<sum;
}
