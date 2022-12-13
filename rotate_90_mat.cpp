#include <bits/stdc++.h>
#define N 4
using namespace std;

void rotate(int arr[][N]){

    int i;
    for(i=0; i<N; i++){
        reverse(arr[i],arr[i]+N);
    }

    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void disp(int arr[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[N][N]={ { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
 

 rotate(arr);

 disp(arr);
    return 0;
}