#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    // Implement your logic here
    int j = 0, i = 0;
    for(i=0; i<n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}