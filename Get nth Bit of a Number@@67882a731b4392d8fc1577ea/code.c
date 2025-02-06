#include <stdio.h>
int main() {
    int a,b,status;
    scanf("%d %d",&a,&b);
    status=(a>>b) & 1;
    printf("%d",status);
    return 0;
}