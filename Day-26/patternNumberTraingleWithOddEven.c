#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        int x = 1;
        for(int j=1; j<=i; j++){
            if(i%2 != 0){
                printf("%d ", x);
                x += 2;
            }
            
            else {
                printf("%d ", ++x);
                x++;
            }
        }
        printf("\n");
    }
    return 0;
}