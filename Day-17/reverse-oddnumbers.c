#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--){
        printf("%d", 2 * i - 1);
        if (i > 1){
            printf(" ");
        }
    }
    if(n == 0) printf(" ");
    else printf("."); 
    return 0;
}