#include <stdio.h>
int foundElem(int *a, int size, int target){
    int i;
    for(i=0; i<size; i++){
        if(a[i] == target) return i;
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,target;
    scanf("%d", &size);
    int a[size];
    int i;
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    int result = foundElem(a,size,target);
    printf("%d", result);
    
    return 0;
}