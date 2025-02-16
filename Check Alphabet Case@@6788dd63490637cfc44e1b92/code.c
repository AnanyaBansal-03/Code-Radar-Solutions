// #include <stdio.h>
// int main() {
//     char a;
//     scanf("%c",&a);
//     if (a>='A' && a<='Z'){
//         printf("Uppercase");
//     }
//     else if (a>='a' && a<='z'){
//         printf("Lowercase");
//     }
//     else {
//         printf("Not an alphabet");
//     }
//     return 0;
// }
#include <stdio.h>
#include <stype.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else if (islower(a)){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}