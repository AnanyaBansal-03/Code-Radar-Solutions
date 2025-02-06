#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int position=0;
    while ((a&1)==0){
        num>>=1;
        position++;
    }
    printf("%d",position);
    return 0;
}