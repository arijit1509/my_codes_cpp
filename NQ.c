#define N 4
#include<stdbool.h>
#include<stdio.h>

void printsol(int board[N][N]){
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf(" %d ",board[i][j]);
        }
        printf("\n");
    }
}

bool isSafe(int board[N][N], int row, int col){
    int i,j;
    for(i=0; i<col; i++){
        if(board[row][i])
            return false;
    }

    for(i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j])
            return false;
    }

    for(i=row,j=col;i<N&&j>=0;i++,j--){
        if(board[i][j])
            return false;
    }

    return true;
}

bool solv_util(int board[N][N], int col){

if(col>=N){
    return true;
}

int i;
for(i=0; i<N; i++){
    if(isSafe(board,i,col)){
        board[i][col]=1;

        if(solv_util(board,col+1))
            return true;

        board[i][col]=0;
          
}
}

return false;
    
}

bool solve_NQ(){
    int board[N][N]={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};

    if(solv_util(board, 0)==false){
        printf("Solution not found");
        return false;
    }

    printsol(board);
    return true;
}

int main(){
    solve_NQ();
    return 0;
}
