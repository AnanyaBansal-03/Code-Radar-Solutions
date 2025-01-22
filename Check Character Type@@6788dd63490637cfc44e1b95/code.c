#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isdigit(a)){
        printf("Digit");
    }
    else if (a=="A" || "E" || "I" || "O" || "U" || "a" || "e" ||"i"||"o"||"u"){
        printf("Vowel");
    }
    else if ((a>="A" && a<="Z") || (a>="a" && a<="z")){
        printf("Consonant");
    }
    else {
        printf("Special Character");
    }
    return 0;
}