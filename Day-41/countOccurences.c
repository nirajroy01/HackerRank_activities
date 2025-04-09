#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    scanf("%d", &size);
    int a[size];
    int count=0;
    int target;
    
    for(int i=0; i<size; i++){
        scanf("%d ", &a[i]);
    }
    
    scanf("\n%d", &target);
    
    for(int i=0; i<size; i++){
        if(a[i] == target) count++;
    }
    printf("%d", count);
    return 0;
}