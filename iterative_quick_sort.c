#include<stdio.h>

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int l, int h){
    int x=arr[h];
    int i=(l-1);

    int j;

    for(j=l; j<=h-1; j++){
        if(arr[j]<x){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void quick_sort(int arr[], int l, int h){

    int stack[h-l+1];
    
    int top=-1;

    stack[++top]=l;
    stack[++top]=h;

    while(top!=-1){
        h=stack[top--];
        l=stack[top--];

        int p= partition(arr, l, h);

        if(p-1>l){
            stack[++top]=l;
            stack[++top]=p-1;
        }

        if(p+1<h){
            stack[++top]=p+1;
            stack[++top]=h;
        }
    }
}

void printarr(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}