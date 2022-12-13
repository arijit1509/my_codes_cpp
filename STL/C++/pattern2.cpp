#include <iostream>
using namespace std;
int main()
{
/*
 *
 * *
 * * *
 * * * *
    int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=0;
        while(j<i){
            cout<<" *";
            j++;
        }
        cout<<endl;
        i++;
    }
*/
/*
1
2 2
3 3 3
4 4 4 4
 int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=0;
        while(j<i){
            cout<<" "<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
/*
1
2 3
4 5 6
7 8 9 10
int row;
    cin>>row;
    int i=1,k=1;
    while(i<=row){
        int j=0;
        while(j<i){
            cout<<" "<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
*/
/*
1
2 3
3 4 5
4 5 6 7
int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=0;
        int k=i;
        while(j<i){
            cout<<" "<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
*/
/*
1
2 3
3 4 5
4 5 6 7
int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=0;
        while(j<i){
            cout<<" "<<i+j;
            j++;
        }
        cout<<endl;
        i++;
    }
*/
/*
 1
 2 1
 3 2 1
 4 3 2 1
int row;
    cin>>row;
    int i=1;
    while(i<=row){
        int j=i;
        while(j!=0){
            cout<<" "<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
*/
/*
A A A 
B B B
C C C
int row, col;
cin>>row;
int i=1;
while(i<=row){
    int j=1;
    while(j<=row){
        char ch='A'+i-1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
A B C D 
A B C D
A B C D
A B C D
int row, i;
cin>>row;
i=1;
while(i<=row){
    int j=1;
    while(j<=row){
        char ch='A'+j-1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
A B C D 
E F G H
I J K L
M N O P
int row, i, count=0;
cin>>row;
i=1;
while(i<=row){
    int j=1;
    while(j<=row){
        char ch='A'+count;
        cout<<ch<<" ";
        j++;
        count++;
    }
    cout<<endl;
    i++;
}
*/
/*
A B C D 
B C D E
C D E F
D E F G
int row, i=1;
cin>>row;
while(i<=row){
    int j=1;
    int k=i;
    while(j<=row){
        char ch='A'+k-1;
        cout<<ch<<" ";
        k++;
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
A B C D 
B C D E
C D E F
D E F G
int row, i=1;
cin>>row;
while(i<=row){
    int j=1;
    while(j<=row){
        char ch='A'+i+j-2;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
A 
B B
C C C
int row, i=1;
cin>>row;
while(i<=row){
    int j=1;
    while(j<=i){
        char ch='A'+i-1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
A 
B C
D E F
G H I J
int row, i=1, count=0;
cin>>row;
while(i<=row){
    int j=1;
    while(j<=i){
        char ch='A'+count;
        cout<<ch<<" ";
        j++;
        count++;
    }
    cout<<endl;
    i++;
}
*/
/*
A 
B C
C D E
D E F G
int row, i=1;
cin>>row;
while(i<=row){
    int j=1;
    int k=i;
    while(j<=i){
        char ch='A'+k-1;
        cout<<ch<<" ";
        j++;
        k++;
    }
    cout<<endl;
    i++;
}
*/
/*
D 
D C
D C B
D C B A
int row, i=1;
cin>>row;
while(i<=row){
    int j=1;
    int k=row;
    while(j<=i){
        char ch='A'+k-1;
        cout<<ch<<" ";
        j++;
        k--;
    }
    cout<<endl;
    i++;
}
*/
/*
D
C D
B C D
A B C D
int row, i=0;
cin>>row;
while(i<row+1){
    int j=0;
    while(j<i){
        char ch='A'+row-i+j;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
      * 
    * *
  * * *
* * * *
int row;
cin>>row;
int i=1;
while(i<=row){
    int j=row-i;
    while(j!=0){
        cout<<"  ";
        j--;
    }
    int k=1;
    while(k<=i){
        cout<<"* ";
        k++;
    }
    cout<<endl;

    i++;
}
*/
/*
      1 
    2 2
  3 3 3
4 4 4 4
int row;
cin>>row;
int i=1;
while(i<=row){
    int j=row-i;
    while(j!=0){
        cout<<"  ";
        j--;
    }
    int k=1;
    while(k<=i){
        cout<<i<<" ";
        k++;
    }
    cout<<endl;

    i++;
}
*/
/*
1 1 1 1 
  2 2 2
    3 3
      4
int row;
cin>>row;
int i=0;
while(i<row){
    int k=0;
    while(k<i){
        cout<<"  ";
        k++;
    }
    int j=0;
    while(j<row-i){
        cout<<i+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/
/*
1 2 3 4 
  2 3 4
    3 4
      4
int row;
cin>>row;
int i=0;
while(i<row){
    int k=0;
    while(k<i){
        cout<<"  ";
        k++;
    }
    int j=0;
    int m=i;
    while(j<row-i){
        cout<<m+1<<" ";
        j++;
        m++;
    }
    cout<<endl;
    i++;
}
*/
    return 0;
}