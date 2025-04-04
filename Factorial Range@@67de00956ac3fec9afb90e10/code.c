int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
void factorialRange(int start,int end){
    if (start > end || start < 0 || end < 0){
        printf("Invalid Range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("%d\n",factorial(i));
    }
}