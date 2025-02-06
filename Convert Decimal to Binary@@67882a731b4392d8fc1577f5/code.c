#include <stdio.h>
int main() {
    int a;
    scanf("%d",%a);
    if (n==0){
        printf("0");
        return 0;
    }
    for (int i=31 ; i>=0 ; i--){
        int bit=(n>>i)&1;
        if (bit==1 || i<31){
            printf("%d",bit);
        }
    }
    return 0;
}