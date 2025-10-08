#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
int i,j,temp;
for(i=0;i<size-1;i++){
    for(j=0;j<size-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
}
void insertionSort(int arr[],int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1]=key;
    }
}

int main(){
    int arr[]={12,17,18,19,2,5,6,9,1,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
   // bubblesort(arr,size);
   insertionSort(arr,size);
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    return 0;
}