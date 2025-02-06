#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("0");
        return 0;
    }
    int start_printing = 0;  // Flag to ignore leading zeros

    for (int i = 31; i >= 0; i--) {
        int bit = (a >> i) & 1;

        if (bit == 1) {
            start_printing = 1;  // Start printing once first '1' is found
        }

        if (start_printing) {  
            printf("%d", bit);
        }
    }
    return 0;
}