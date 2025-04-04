#include <stdio.h>
void rightRotate(int arr[],int size,int rotations){
    rotations=rotations%size;
    int temp[rotations];
    for (int i=0;i<rotations;i++){
        temp[i]=arr[size-rotations+i];
    }
    for (int i=size-1;i>=rotations;i--){
        arr[i]=arr[i-rotations];
    }
    for (int i=0;i<rotations;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int size,rotations;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&rotations);
    rightRotate(arr,size,rotations);
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}