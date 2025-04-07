#include <stdio.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; //for size of array
    scanf("%d\n", &n);
    int min = INT_MIN;
    int max = INT_MAX;
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    
    for(int i=0; i<n; i++){
        if(a[i] > min) min = a[i];
        if(a[i] < max) max = a[i];
    }
    printf("%d %d", min,max);
    return 0;
}
