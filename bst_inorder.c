#include <stdio.h>

void bst_inorder(int arr[], int l, int h){

if(l>h){
    return ;
}

bst_inorder(arr, l*2+1, h);

printf("%d ",arr[l]);

bst_inorder(arr, l*2+2, h);

}

int main()
{
    int arr[]={4,2,5,1};
    int n=sizeof(arr)/sizeof(int);

    bst_inorder(arr, 0, n-1);
    return 0;
}