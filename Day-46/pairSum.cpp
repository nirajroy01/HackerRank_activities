#include <stdio.h>

void findPair(int arr[], int target, int n){
    
    
     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i] + arr[j]) == target){
                printf("%d %d", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("-1");
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int k=0; k<n; k++){
        scanf("%d", &arr[k]);
    }
    
    int target;
    scanf("%d", &target);
    
    findPair(arr, target, n);
    
    return 0;
}

