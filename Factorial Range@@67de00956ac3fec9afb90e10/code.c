int factorialRange(int start,int end,int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
    if (start>end || start<0 || end<0){
        printf("Invalid Range\n");
        return;
    }
    for (int i=start;i<=end;i++){
        printf("%d\n",factorial);
    }
}