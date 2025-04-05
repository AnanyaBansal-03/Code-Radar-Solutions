int findKthMissing(int arr[],int n,int k){
    int missing_count=0;
    int current=1;
    for (int i=0;i<n;i++){
        while (current<arr[i]){
            missing_count++;
            if (missing_count==k){
                return current;
            }
            current++;
        }
        current=arr[i]+1;
    }
    while (missing_count<k){    // if element is not found it must be after the last element 
        missing_count++;
        if (missing_count==k){
            return current;
        }
        current++;
    }
    return -1;
}