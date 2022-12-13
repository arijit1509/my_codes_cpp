#include <iostream>
#include <math.h>
using namespace std;



int main()
{
/*To get each binary bit one by one*/
   /*
   int num;
   cin>>num;
   while(num!=0){
    int bit=num & 1;
    num>>=1;
    cout<<bit<<endl;
   }
   */
// to get reverse order of a number
/*
    int num;
    int ans=0;
    cin>>num;
    while(num!=0){
        int digit=num%10;
        ans=(ans*10)+digit;
        num/=10;
    }
    cout<<ans;
*/
//to convert decimal to binary
/*
    int num;
    int ans=0;
    cin>>num;
    while(num!=0){
        int bit=num & 1;
        ans=(ans*10)+bit;
        num>>=1;
    }
    cout<<ans;
*/
//another method of conversion
/*
    int num,i;
    int ans=0;
    cin>>num;
    while(num!=0){
        int bit=num & 1;
        ans=(bit*pow(10,i))+ans;
        num>>=1;
        i++;
    }
    cout<<ans;
*/
//binary to decimal conversion
/*
    int num;
    cin>>num;
    int i=0, ans=0;
    while(num!=0){
        int digit=num%10;
        if(digit==1) ans=ans+pow(2,i);
        i++;
        num=num/10;
    }
    cout<<ans;
*/

//1s complement of a number
/*
    int num,i,comp,compp, ans=0;
    cin>>num;
    int w=num;
    while(num!=0){
        int bit=num & 1;
        ans=(bit*pow(10,i))+ans;
        num>>=1;
        i++;
    }
    cout<<ans<<endl;
    unsigned mask=~0;
    while(ans & mask) mask<<=1;
    comp=(~ans) & (~mask);
    //compp=comp+1;
    cout<<"Ones complement of "<<w<<" is "<<comp<<endl;//<<endl<<"Twos compliment of "<<w<<" is "<<compp;
*/
//2s compliment of given number
/*
    int num,i=0,ans=0,flag=0;
    cin>>num;
    if(num<0){
        num=(-1)*num;
        flag=1;
    } 
    while(num!=0){
        int bit=num & 1;
        ans=(bit*pow(10,i))+ans;
        num>>=1;
        i++;
    }
    if(flag=1){
        while(ans!=0){
            int digit=ans%10;
            if(digit==0) digit=1;
            ans1=
        }
    }
*/




    return 0;
}