#include <stdio.h>
int main() {
    int a,b,bc;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b==c){
        printf("Equilateral");
    }
    else if (a==b && a!=c){
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
    return 0;
}