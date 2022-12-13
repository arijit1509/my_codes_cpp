/*#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, char> p1(100, 'g'), p2(p1);
    pair<int, float> p3,p5(5,6.5);
    p3=make_pair(12, 10);
    p5.second=7.5;
    cout<<p5.first<<" ";
    cout<<p5.second<<" ";
    pair<int, pair<float, char>> p4={2, {2.5,'g'}};

    
    /*int a;
    float b;
    char z;
    a=p4.first;
    tie(b,z)=p4.second;

    cout<<a<<" "<<b<<" "<<z<<endl;
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, pair<float, char>> p1;

    p1=make_pair(5, make_pair(6.5, 'g'));

    int a;
    float b;
    char c;

    a=p1.first;
    tie(b,c)=p1.second;



    cout<<a<<" "<<b<<" "<<c<<endl;


    return 0;
}