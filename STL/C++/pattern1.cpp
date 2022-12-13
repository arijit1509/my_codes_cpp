#include <iostream>
using namespace std;
int main()
{
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
  int row, col;
  cin>>row;
  for(int i=0;i<row;i++){
    for(int col=0;col<row;col++){
        cout<<" *";
    }
    cout<<endl;
  }
*/
/*
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
  int row, col;
  cin>>row;
  int i=1;
  while(i<=row){
    int j=0;
    while(j<row){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
  }
*/
/*
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
int row;
cin>>row;
int i=1;
while(i<=row){
    int j=1;
    while(j<=row){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
3 2 1 
3 2 1
3 2 1
int row;
cin>>row;
int i=row;
while(i!=0){
    int j=row;
    while(j!=0){
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
    i--;
}
*/
/*
3 2 1 
3 2 1
3 2 1
int row;
cin>>row;
int i=1;
while(i<=row){
    int j=1;
    while(j<=row){
        cout<<row-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
1 2 3 
4 5 6
7 8 9
int row,k=1;
cin>>row;
int i=0;
while(i<row){
    int j=1;
    while(j<=row){
        cout<<k<<" ";
        j++;
        k++;
    }
    cout<<endl;
    i++;
}
*/
    return 0;
}