#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int num = 1; num <= size + 1; num++) {
        int found = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%d\n", num);
            break;
        }
    }
    return 0;
}