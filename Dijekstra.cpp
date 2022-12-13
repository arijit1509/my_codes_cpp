#include <iostream>
using namespace std;
#include<limits.h>

#define N 5
#define max 10000

void printsol(int dist[]){
    cout<<"node\t\tdist"<<endl;

    for(int i=0; i<N; i++){
        cout<<i<<"\t\t"<<dist[i]<<endl;
    }
}

int minDist(int dist[], bool visit[]){
    int min=max;
    int min_index;

    for(int i=0; i<N; i++){
        if(visit[i]==false&&dist[i]<=min){
            min=dist[i];
            min_index=i;
        }
    }

    return min_index;

}

void dijkstra(int arr[N][N], int src){
    int dist[N];
    bool visit[N];

    for(int i=0; i<N; i++){
        dist[i]=max;
        visit[i]=false;
    }

    dist[src]=0;

    for(int count=0;count<N-1;count++){

        int u=minDist(dist,visit);

        visit[u]=true;

        for(int v=0; v<N; v++){
            if(!visit[v]&&arr[u][v]&&dist[u]!=max&&dist[u]+arr[u][v]<dist[v]){
            dist[v]=dist[u]+arr[u][v];
        }
        }
        

    }

    printsol(dist);


}

int main()
{
    int arr[N][N];
    /*cout<<"Enter the number of nodes:\t";
    cin>>n;*/

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    dijkstra(arr,0);

    return 0;
}