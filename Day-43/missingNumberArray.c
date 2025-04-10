#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    scanf("%d", &size);
    int a[size];
    int sum1 = 0;
    for(int i=0; i<size-1; i++){
        scanf("%d", &a[i]);
        sum1 = sum1 + a[i];
    }
    int sum2 = (size * (size + 1)) / 2;
    printf("%d", sum2-sum1);
    
    return 0;
}