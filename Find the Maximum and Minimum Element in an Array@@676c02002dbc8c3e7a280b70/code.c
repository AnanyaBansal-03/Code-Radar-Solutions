#include <stdio.h>
int maxAndMinElement(int max,int min){
    max=min=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            return max=arr[i];
        }
        if (arr[i]<min){
            return min=ar[i];
        }
    }
}
int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max);
    printf("%d",min);
    return 0;
}