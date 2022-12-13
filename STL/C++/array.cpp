#include <bits/stdc++.h>
using namespace std;
 
void showArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*
//max & min element find in an array
void getMax(int arr[], int size){
    int maxi=INT_MIN;
    for(int i=0; i<size; i++){
        maxi=max(maxi, arr[i]);
        //if(arr[i]>max) max=arr[i];
    }
    cout<<"The max element is "<<maxi<<endl;
    
}

void getMin(int arr[], int size){
    int mini=INT_MAX;
    for(int i=0; i<size; i++){
        mini=min(mini, arr[i]);
        //if(arr[i]<min) min=arr[i];
    }
    cout<<"The min element is "<<mini;
}



 
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    getMax(arr, size);
    getMin(arr, size);
    return 0;
}
*/

/*
//filling the array with any element other than zero
int main()
{
    int arr[10];
    fill_n(arr, 10, 5);

    int n=sizeof(arr)/sizeof(int);
    showArr(arr, n);
    
    return 0;
}
*/
/*
//get the sum of all elemets in the array
void getSum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"The sum of the elements of the array is "<<sum;
    
}


int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    getSum(arr, size);
    return 0;
}
*/
/*
//linear search
bool search(int arr[], int size, int num){
    int n=num;
    for(int i=0; i<size; i++){
        if(n==arr[i]) return true;
    }
    return false;
}

int main(){
    int arr[]={2, -2, 4, 7, 90, -1, 40, 1};
    int n=8, num;
    cout<<"Enter the element to search ";
    cin>>num;
    if(search(arr, 8, num)) cout<<endl<<"The element is present"<<endl;
    else cout<<"The element is not present"<<endl;

    return 0;
}
*/
/*
//reverse an array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void reverseArray(int arr[], int size){
   int start=0, end=size-1;
   while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
   }
}


int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={5,4,3,2,1};
    
    reverseArray(arr1, 6);
    reverseArray(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;
}
*/
/*
//reverse characters
void printArray(char arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void reverseArray(char arr[], int size){
   int start=0, end=size-1;
   while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
   }
}
int main(){
    char ch[5]={'a', 'd', 'r', 't', 'f'};

    reverseArray(ch, 5);

    printArray(ch, 5);


    return 0;
}
*/

 


 