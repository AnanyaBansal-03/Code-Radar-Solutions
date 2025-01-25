#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if (c=='+'){
        printf("%d",(int)(a+b));
    }
    else if (c=='-'){
        printf("%d",(int)(a-b));
    }
    else if (c=='*'){
        printf("%d",(int)(a*b));
    }
    else if (c=='/'){
        if (b!=0){
            printf("%d",(int)(a/b));
        }
        else {
            printf("error");
        }
    }
    else {
        printf("error");
    }
    return 0;
}