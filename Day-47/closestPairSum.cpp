#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void findPair(int arr[], int target, int n){
    int nearSum = INT_MAX;
    int p1 = 0, p2 = 0;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = arr[i] + arr[j];
            
            if(abs(target - sum) < abs(target - nearSum)){
                nearSum = sum;
                p1 = arr[i];
                p2 = arr[j];
            }
        }
    }
    printf("%d %d", p1, p2);
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