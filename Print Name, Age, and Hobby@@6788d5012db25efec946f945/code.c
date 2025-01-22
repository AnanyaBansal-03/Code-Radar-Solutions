#include <stdio.h>
int main() {
    char a[30];
    int b;
    char c[30];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}