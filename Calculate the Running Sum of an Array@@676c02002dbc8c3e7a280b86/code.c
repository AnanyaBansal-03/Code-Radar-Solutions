#include <stdio.h>
int main(){
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for (int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
        sum+=i;
        printf("%d ",sum);
    }
    return 0;
}