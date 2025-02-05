#include <stdio.h>
int main() {
    int a,flipped;
    scanf("%d",&a);
    flipped=~a;
    printf("%d",flipped);
    return 0;
}