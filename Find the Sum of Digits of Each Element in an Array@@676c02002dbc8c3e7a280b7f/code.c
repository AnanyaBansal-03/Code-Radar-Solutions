#include <stdio.h>
#include <stdlib.h>
int sumOfArray(int num){
    int sum=0;
    while (num!=0){
        sum+=num%10;
        num/=10;
    }
    return abs(sum);
}
int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++){
        printf("%d ",sumOfArray(arr[i]));
    }
    return 0;
}