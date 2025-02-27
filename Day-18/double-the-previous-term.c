#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    if(n == 0) printf(" ");
    if(n > 0){
    printf("<");
    for(int i = 1; i <= n; i++){
         if (i > 1){
            printf(" ");
         }
         printf("%d", 1 << (i-1));
    }
     printf(">");
    }
    return 0;
}