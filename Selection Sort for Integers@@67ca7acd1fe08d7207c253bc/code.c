int selectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minindex=i;
        for (int j=i+1;j<size;j++){
            if (arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if (minindex!=i){
            int temp=   arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}
int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}