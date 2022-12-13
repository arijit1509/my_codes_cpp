#include <iostream>
using namespace std;
/*
//power function
void pow(){
    int ans=1,a,b;
    cout<<"enter values of a & b for pow(a,b): "<<endl;
    cin>>a>>b;
    while(b){
        ans*=a;
        b--;
    }
    cout<<ans<<endl;
}


int main()
{
    int a,b;
    char ch;
    while(1){
        pow();
        cout<<"Do you want to continue(Y/N): ";
        cin>>ch;
        if((ch=='n')||(ch=='N')) exit(0);
    }
    return 0;
}

#include <iostream>
using namespace std;
//factorial function
int fact(int n){
    int ans=1;
    while(n){
        ans*=n;
        n--;
    }
    return ans;
}
//ncr function
int ncr(int n, int r){
    if((r==n)||(r==0)) return 1;
    else if(r==1) return n;
    int res=fact(n)/(fact(r)*fact(n-r));
    return res;
}

int main()
{
    int n,r;
    cin>>n>>r;
    
    int res=ncr(n,r);
    cout<<res<<endl;
    return 0;
}
*/
/*
//total setbit count
#include <iostream>
using namespace std;
 
int setBit(int a){
    int bits=0;
    while(a!=0){
        int bit=a & 1;
        if(bit==1) bits+=1;
        a>>=1;
    }

    return bits;
} 

int setBitCount(int a, int b){
    
    int setbits;
    setbits=setBit(a)+setBit(b);

    return setbits;
}


int main()
{
    int a, b;
    cout<<"Enter the values of a & b: "<<endl;
    cin>>a>>b;
    int ans=setBitCount(a,b);
    cout<<ans;
    return 0;
}
*/
#include <iostream>
using namespace std;
 
int fib(int n){
    int ans;
    if((n==0)||(n==1)) return n;

    else return fib(n-2)+fib(n-1);
}

 

int main()
{
    int n,i=0;
    cin>>n;
    while(i<=n){
        cout<<fib(i)<<" ";
        i++;
    }
    
    return 0;
}