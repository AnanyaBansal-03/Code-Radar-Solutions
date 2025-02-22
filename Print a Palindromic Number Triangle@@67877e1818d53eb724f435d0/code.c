#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){                   // Row loop 
        for (int j=1;j<=n-i;j++){             // Printing spaces for alignment
            printf(" ");
        }
        for (int j=i;j>=1;j++){               // Printing decreasing numbers
            printf("%d ",j);
        }
        for (int j=2;j<=i;j++){               // Printing increasing numbers
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}