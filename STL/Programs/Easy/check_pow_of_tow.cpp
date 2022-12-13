#include <iostream>
using namespace std;
 
bool checkPow(int n){
    return n && (!(n & (n-1)));
}


int main()
{
    int num;
    cin>>num;
    if(checkPow(num)) cout<<"The number is power of 2"<<endl;
    else cout<<"The number is not power of 2"<<endl;
    return 0;
}