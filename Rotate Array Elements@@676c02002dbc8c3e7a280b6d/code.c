#include <stdio.h>
void rotateElements(int arr[],int size,int rotations){
    rotations=rotations%size;
    int temp[rotations];
    for (int i=0;i<size;i++){
        temp[i]=arr[size-rotations+i];
    }
    for (int i=size-1;i>=rotations;i--){
        arr[i]=arr[i-rotations];
    }
    for (int i=0;i<size;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int rotations;
    scanf("%d",&rotations);
    rotateElements(arr,size,rotations);
    for (int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}