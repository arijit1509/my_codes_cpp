#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter the input: ";
    ch=cin.get();

    if((ch>=48)&&(ch<=57)) cout<<"This is a number"<<endl;

    else if ((ch>=65)&&(ch<=90)) cout<<"This is an uppercase"<<endl;

    else if ((ch>=97)&&(ch<=122)) cout<<"This is a lowercase"<<endl;
    
    return 0;
}