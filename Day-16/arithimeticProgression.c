#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a,d;
    scanf("%d", &n);
    scanf("%d %d", &a, &d);
    
    for(int i=0; i<n; i++){
        printf("%d ", a + i * d);
    }
    
    return 0;
}