#include <stdio.h>
int main() {
    int a;
    int cnt=0;
    scanf("%d",&a);
    if (n<=1){
        printf("Not Prime");
    }
    else {
        for (int i=1;i<=n;i++){
            if (n%i==0){
                cnt++;
            }
            if cnt<2{
                printf("Not Prime");
            }
            else {
                printf("Prime");
            }
        }
    }
    return 0;
}