#include <stdio.h>
int main() {
    int a,b,status;
    scanf("%d %d",&a,&b);
    status=a & (~(1<<b));
    printf("%d",status);
    return 0;
}