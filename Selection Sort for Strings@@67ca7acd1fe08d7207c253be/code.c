int selectionSort(char arr[][100],int n){
    for (int i=0;i<n-1;i++){
        int minindex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if (minindex!=i){
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}
int printArray(char arr[][100],int n){
    for (int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}