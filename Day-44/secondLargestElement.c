#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
    for(int i=1; i<n; i++){
        for(int j=0; j<=n-2; j++){
           if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           }
        }
    }
    
    for(int i=n-2; i>=0; i--){
        if(arr[n-1] > arr[i]){
            return arr[i];
        }
    }
    
    return -1;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}