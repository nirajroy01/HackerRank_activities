#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
     for(int i=1; i<=n; i++){
        int temp = i;
        for(int j=1; j<=i; j++){
            printf("%d ", temp);
            temp = temp + (n-j);
        }
        printf("\n");
    }
    return 0;
}