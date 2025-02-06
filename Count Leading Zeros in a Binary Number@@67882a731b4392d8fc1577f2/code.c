#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int count=0;
    while (a>0){
        if (a&(1<<31)){
            break;
        }
        count++;
        n<<=1;
    }
    printf("%d",count);
    return 0;
}