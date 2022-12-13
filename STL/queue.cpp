#include <iostream>
#include <queue>
using namespace std;
 
//print the queue
  void printQueue(queue<int> q){
    queue<int> gq=q;
    while(!gq.empty()){
        cout<<gq.front()<<" ";
        gq.pop();
    }
    cout<<endl;
    
  }
    


int main()
{
    //populate the queue
    queue<int> q1,q2;
    for(int i=0; i<5; i++){
        q1.push(i*10);
    }
    for(int i=0; i<6; i++){
        q2.push(i*10);
    }

    printQueue(q1);
    cout<<q1.front()<<" "<<q1.back()<<endl;

    
    q1.emplace(90);
    printQueue(q1);

    q1.swap(q2);
    cout<<"q1"<<" ";
    printQueue(q1);
    cout<<endl<<"q2"<<" ";
    printQueue(q2);


    
    return 0;
}