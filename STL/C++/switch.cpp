#include <iostream>
using namespace std;
 
int main()
{
    /*
   int a, b;
   cout<<"Enter the number a: "<<endl;
   cin>>a;
   cout<<"Enter the number b: "<<endl;
   cin>>b;

   char ch;
   cout<<"Enter the operation you want to perform: "<<endl;
   cin>>ch;

   switch(ch){
    case '+': cout<<(a+b)<<endl;
              break;
    case '*': cout<<(a*b)<<endl;
              break;
    case '/': cout<<(a/b)<<endl;
              break;
    default:  cout<<"The expression is not valid";
   }
   */

   int total=1330,i;
   cin>>i;
   while(total!=0){
    switch(i){
    case 1: cout<<"Number of 100 rupee notes "<<total/100<<endl;
              total%=100;
              i++;
              break;
    case 2: cout<<"Number of 50 rupee notes "<<total/50<<endl;
             total%=50;
             i++;
             break;
    case 3: cout<<"Number of 20 rupee notes "<<total/20<<endl;
             total%=20;
             i++;
             break;
    case 4:  cout<<"Number of 1 rupee notes "<<total/1<<endl;
             total%=1;
             i++;
             break;
   }
   }
    
    return 0;
}