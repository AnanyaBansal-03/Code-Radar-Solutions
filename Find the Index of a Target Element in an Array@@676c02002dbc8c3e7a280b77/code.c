#include <stdio.h>
int main(){
    int size,target;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int found=0;
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            printf("%d\n",i);
            found=1;
            break;
        }
    }
    if (!found){
        printf("-1\n");
    }
    return 0;
}