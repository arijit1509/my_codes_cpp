#include <iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

int flag=0;
void DFS(int u,int **g,int *vis,int node)
{
    stack<int> sta ;
    int i;
  // cout<<"\n node is visited:  "<<u<<endl;
   vis[u]=0;
   for(i=0;i<node;i++)
   {
       if( g[u][i]==1)
       {
         //  cout<<"node is pushed :"<<i<<" ";
           sta.push(i);
       }
   }
   
   while(!sta.empty())
   {
        int v=sta.top();
        sta.pop();
        if(vis[v]==-1)
        {
           
             DFS(v,g,vis,node);
        }
        else
        {
           // cout<<"node is already visited "<<v;
            if(g[u][v]==1 && abs(u-v)>1)
            {
                cout<<"cycle detection "<<endl;
                flag=1;
            }
        }
   }
}
int main()
{
    int node,comp=0,i,j;
   cout<<"enter no of node:"<<endl;
   cin>>node;
   
   int **graph=(int**)calloc(node,sizeof(int*));
   int *visited=(int*)calloc(node,sizeof(int));
   for(int i=0;i<node;i++)
   {
       graph[i]=(int*)calloc(node,sizeof(int));
       visited[i]=-1;
   }
 
 
    for( i=0;i<node;i++)
    {
        for( j=0;j<node;j++)
        {
            cin>>graph[i][j];
        }
    }
   
   
   
    for(i=0;i<node;i++)
    {
        if(visited[i]==-1)
        {
            comp++;
            DFS(i,graph,visited,node);
        }
    }
   
    cout<<comp;
    if(flag==0)
    {
        cout<<"no cycle";
    }
    return 0;
}
