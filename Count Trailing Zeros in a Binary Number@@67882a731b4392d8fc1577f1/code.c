#include <stdio.h>
int main() {
    int a,count=0;
    scanf("%d",&a);
    while ((n&1)==0 && n!=0){
        count++;
        n=n>>1;
    }
    printf("%d",count);
    return 0;
}