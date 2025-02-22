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
    int rows, i, j;
    
    // Taking input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // Loop for rows
    for (i = 0; i < rows; i++) {
        // Loop for columns
        for (j = 0; j <= i; j++) {
            // Print alternating 0 and 1
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
    
    return 0;
}
