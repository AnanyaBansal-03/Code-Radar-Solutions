#include <stdio.h>
int main() {
    int i;
    int a;
    scanf("%d",&a);
    int sum=0;
    for (i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}