#include <stdio.h>

void reverseArray(int arr[], int n) {
    // Implement the function to reverse the array in-place
    if(n == 0 || n == 1) return;
    else{
       int temp = arr[0];
        arr[0] = arr[n-1];
        arr[n-1] = temp;
    }
    
    reverseArray(arr + 1, n-2);  
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}