#include <stdio.h>

void removeDuplicates(int arr[], int *n){
	//Implement the function here
    for(int i=0; i<*(n)-1; i++){
        for(int j=i+1; j<*n; j++){
            if(arr[i] == arr[j]){
                for(int k=j; k<*(n)-1; k++){
                    arr[k] = arr[k+1];
                }
                j--;
                *n = *n - 1;
            }
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

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}