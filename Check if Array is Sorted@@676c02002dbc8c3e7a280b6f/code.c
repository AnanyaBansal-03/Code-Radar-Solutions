#include <stdio.h>
int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size-1;i++){
        if (arr[i]>arr[i+1]){
            printf("Not Sorted");
        }
        else {
            printf("Sorted");
        }
    }
    return 0;
}