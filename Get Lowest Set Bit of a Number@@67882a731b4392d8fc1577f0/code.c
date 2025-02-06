#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("no set bits in the number");
        return 0;
    }
    int position=0;
    while ((a&1)==0){
        n>>=1;
        position++;
    }
    printf("%d",position);
    return 0;
}