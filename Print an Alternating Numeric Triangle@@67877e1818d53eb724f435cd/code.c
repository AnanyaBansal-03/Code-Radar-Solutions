// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for (int i=0;i<a;i++){
//         for (int j=0;j<=a;j++){
//             printf("%d ",(i+j)%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {  // Row loop
        for (int j = 0; j <= i; j++) {  // Column loop for triangle shape
            printf("%d ", (i + j + 1) % 2);  // Adjusted formula to start from 1
        }
        printf("\n");
    }

    return 0;
}
