#include <stdio.h>
int maxElement(int arr[],int size){
    int max=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minElement(int arr[],int size){
    int min=arr[0];
    if (int i=0;i<size;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=maxElement(arr,size);
    int min=minElement(arr,size);
    printf("%d",max);
    printf("%d",min);
    return 0;
}