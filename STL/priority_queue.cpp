#include <bits/stdc++.h>
using namespace std;
 
void showQ(priority_queue<int> q){
    priority_queue<int> q1=q;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;
}
 

int main()
{
    int a;
    priority_queue<int> q;
    /*
    for(int i=1; i<=5; i++) q.push(i*10);
    showQ(q);
    cout<<"Popped element is "<<q.top()<<endl;
    q.pop();
    showQ(q);
    cout<<"Poped element is "<<a<<endl;
    */
    /*
    //it a;ways stores the elements in a sorted order
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(8);
    showQ(q);
    */
    /*
    //min priority queue
    q.push(-1);
    q.push(-2);
    q.push(-3);
    q.push(-4);

    while(!q.empty()){
        cout<<(-1)*q.top()<<" ";
        q.pop();
    }
    */
    /*
    //another way to implement min priority queue
    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(1);
    q1.push(5);
    q1.push(2);
    q1.push(6);
    cout<<q1.top()<<endl;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    */
    /*
    //using array implementing max & min priority queue
    int arr[]={1,2,3,4,5};
    priority_queue<int> qmax(arr, arr+5);
    showQ(qmax);
    for(int i=0; i<5; i++){
        arr[i]=-arr[i];
    }
    priority_queue<int> qmin(arr, arr+5);
    while(!qmin.empty()){
        cout<<(-1)*qmin.top()<<" ";
        qmin.pop();
    }
    */


    return 0;
}