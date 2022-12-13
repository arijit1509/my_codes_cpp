#include<stdio.h>
#include<stdlib.h>


void miss(int arr[], int n){
    int i;
    printf("The repeating element is:\t");
    for(i=0; i<n; i++){
        if(arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        else{
            printf("%d",abs(arr[i]));
        }
    }
    printf("\nThe missing element is:\t");
    for(i=0; i<n; i++){
        if(arr[i]>0){
            printf("%d", i+1);
        }
    }
}


int main(){
    int arr[]={7,6,5,5,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    miss(arr,n);
    return 0;
}