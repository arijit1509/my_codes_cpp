#include <forward_list>
#include <iostream>
using namespace std;
 
 //show list
 void showList(forward_list<int> l){
    
    for(int& a:l){
        cout<<a<<" ";
    }
    cout<<endl;
    
 }
 //function to give predicat for remove_if()
 bool less_five(const int& value){
    return(value<5);
 }
 
 

int main()
{
    forward_list<int> l1,l2,l3;
    forward_list<int>::iterator it;

    //value assign
      //using assign
      l1.assign({1,2,3});
      l2.assign(2,10);
      l3.assign(l1.begin(),l1.end());
      //showList(l1);
      //showList(l2);
      //showList(l3);
    //data insertion and delition in a created forward list
      /*
      l1.push_front(5);
      showList(l1);
      l1.emplace_front(6);
      showList(l1);
      l1.pop_front();
      showList(l1);
      */
      it=l1.begin();
      ++it;
      it=l1.insert_after(it, {6,7,8});
      showList(l1);
      //it now points to 8
      it=l1.emplace_after(it,90);
      showList(l1);
      //3 will be deleted
      it=l1.erase_after(it);
      showList(l1);
      //using remove and remove if
      l1.remove(90);
      showList(l1);
      l1.remove_if(less_five);
      showList(l1);

    return 0;
}