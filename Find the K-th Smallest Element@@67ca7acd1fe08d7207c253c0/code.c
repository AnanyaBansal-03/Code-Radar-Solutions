#include <stdio.h>
int kthSmallest(int arr[],int n,int k){
    if (k<1 || k>n){
        return -1;           // K is out of range
    }
    // Simple Bubble Sort 
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr[k-1];
}