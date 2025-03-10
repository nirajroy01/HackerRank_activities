#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<=n-1; i++){
        
        for(int k=1; k<=n-i-1; k++){
            printf(" ");
        }
        int x = 1;
        for(int j=0; j<=i; j++){
            printf("%d ", x);
            x = x * (i-j) / (j+1);
        }
        printf("\n");
    }
    return 0;
}