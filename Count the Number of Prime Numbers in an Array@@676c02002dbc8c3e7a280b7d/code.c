#include <stdio.h>
int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i,size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=0;i<size;i++){
        if (isPrime(arr[i])){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}