#include <stdio.h>
#include <ctype,h>
int main() {
    char a;
    scanf("%c",&a);
    if (isdigit(a)){
        printf("Digit");
    }
    else if (a=="AEIOUaeiou"){
        printf("Vowel");
    }
    else if (a!="AEIOUaeiou"){
        printf("Consonant");
    }
    else {
        printf("Special Character");
    }
    return 0;
}