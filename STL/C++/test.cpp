#include <bits/stdc++.h>
using namespace std;

//A given number is power of 2 or not

void checkPow(int num){
    while(num!=0){
        int bit=num & 1;
        cout<<bit<<" ";
        num>>=1;
    }
   
}


int main()
{
    int num;
    cout<<"Enter any number to check it is power of 2: ";
    cin>>num;
    checkPow(num);
    return 0;
}