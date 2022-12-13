#include <bits/stdc++.h>
#include<iterator>
using namespace std;

void showList(list<int> l1){
    for(auto it:l1){
        cout<<it<<"\t";
    }
    cout<<endl;
}

bool singleDigit(const int& value){
    return(value<10);
}

 

int main()
{
    list<int> l1;
    list<int>::iterator it1, it2;
    /*
    vector<int> v(2,36);
    l1.assign(5,26);
    showList(l1);
    
    l1.push_back(3);
    showList(l1);
    l1.push_front(6);
    showList(l1);
    l1.sort();
    showList(l1);
    l1.reverse();
    showList(l1);
    l1.insert(l1.begin(),5);
    showList(l1);
    l1.remove(5);
    showList(l1);

    l1.push_back(10);
    l1.push_back(5);
    l1.push_back(7);
    showList(l1);
    l1.remove_if(singleDigit);
    
    it=l1.begin();
    ++it;
    l1.insert(it,2,5);
    showList(l1);
    l1.insert(--it,v.begin(),v.end());
    */
   
    
    l1.unique();
    showList(l1);
    list<int> l2,l3,l4;
    for(auto i=1;i<=5;i++){
        l2.push_back(i);
        l3.push_back(i+5);
    }
     it1=it2=l3.begin();
    showList(l2);
    showList(l3);
    /*
    l2.swap(l3);
    showList(l2);
    showList(l3);
    
    it=l3.begin();
    ++it;
    l4.splice(l4.begin(),l3,it);
    
    l2.merge(l3);
    showList(l2);
    */

    advance(it2,4);
    l3.erase(it1,it2);
    showList(l3);

    

    return 0;
}