int isPrime(int num){
    if (num<=1){
        printf("No prime numbers");
    }
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
        printf("No prime numbers");
        }
    }
    return 1;
}
int printPrimesInRange(int a,int b){
    for (int i=a;i<=b;i++){
        if (isPrime(i)){
            printf("%d ",i);
        }
    }
}