#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    set<char> s1;
    s1.insert('a');
    s1.insert('g');
    s1.insert('f');
    s1.insert('f');

    for(auto it: s1){
        cout<<it<<" ";
    }

    set<char> s2(s1.begin(), s1.end());

    for(auto it: s2){
        cout<<it<<" ";
    }

    //s2.erase(s2.begin(), s2.find('f'));
    s2.erase('f');

    for(auto it: s2){
        cout<<it<<" ";
    }

    set<int, greater<int>> s3;
    s3.insert(2);
    s3.insert(5);
    s3.insert(7);

    for(auto it: s3){
        cout<<it<<" ";
    }

    return 0;
}