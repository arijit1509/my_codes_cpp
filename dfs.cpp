#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        map<int, bool> visited;
        map<int, list<int>> adj;

        void addEdge(int a , int b);

        void DFS(int a);
};

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
}

void Graph::DFS(int a){
    visited[a]=true;

    cout<<a<<" ";

    list<int>::iterator i;
    for(i=adj[a].begin();i!=adj[a].end();++i)
            if(!visited[*i])
                DFS(*i);
}

int main(){
    int a,b,e;

    Graph g;

    g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

    cout<<"DFS traversal"<<endl;
    g.DFS(2);
    return 0;
}