#include <stdio.h>
int rotateElements(int arr[],int size,int rotations){
    rotations=rotations%size;
    int temp[rotations];
    for (int i=0;i<size;i++){
        temp[i]=arr[i];
    }
    for (int i=0;i<size-rotations;i++){
        arr[i]=arr[i+rotations];
    }
    for (int i=0;i<size;i++){
        arr[size-rotations+i]=temp[i];
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
    int result=rotateElements(arr,size,rotations);
    printf("%d",result);
    return 0;
}