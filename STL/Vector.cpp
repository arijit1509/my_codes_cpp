#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> g;
    /*
    int n,i;
    cin>>i>>n;
    for(i; i<=n; i++){
        g.push_back(i);
    }
    for(auto i=g.rbegin(); i!=g.rend(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    int size=g.capacity();

    cout<<"The size of this vector is "<<size;
    */

    g.push_back(1);
    g.push_back(2);
    g.push_back(3);
    g.push_back(4);
    g.push_back(5);
    g.push_back(6);
    /*
    cout<<"Size is "<<g.size()<<endl;

    cout<<g[2]<<" ";
    cout<<g.at(2)<<" ";
    cout<<g.front()<<" ";
    cout<<g.back()<<" ";
    cout<<g.data()<<" ";
    */

    /*
    vector<int> g1,g2;
    g1.assign(5,10);
    for(auto it: g1){
        cout<<it<<" ";
    } 
    cout<<endl;
    g2=g1;
    g1.insert(g1.begin()+2,2);
    g1.swap(g2);
    
    for(auto it: g1){
        cout<<"g1"<<it<<endl;
    }
    for(auto it: g2){
        cout<<"g2"<<it<<" ";
    }
    */

    /*
    //2d vector intialization
    vector<vector<int>> g1;

    vector<int> a(3,4),b(6,5),c(3,9);

    g1.push_back(a);
    g1.push_back(b);
    g1.push_back(c);

    for(auto vctr: g1){
        for(auto it: vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    */
    vector<vector<int>> v(10, vector<int> (2,4));//here size of inner vector is 10 & we are using 2 such vectors to store number 4
    for(auto vec:v){
        for(auto it:vec){
            cout<<it<<" ";
        }
    }



    return 0;
}