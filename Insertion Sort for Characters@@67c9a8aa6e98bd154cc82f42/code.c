int insertionSort(char arr[],int n){
    for (int i=1;i<n;i++){
        char key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int printArray(char arr[],int n){
    for (int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}