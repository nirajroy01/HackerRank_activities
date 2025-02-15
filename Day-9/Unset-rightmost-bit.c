#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,i;
    scanf("%d %d", &N, &i);
    
    N = N & (N-1);
    printf("%d", N);
    return 0;
}