#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n>=1){
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++){
            printf(" ");
        }
        
        int x = 0;
        
        for(int j=1; j<=2*i-1; j++){
            if(j<=i) printf("%d", ++x);
            else printf("%d", --x);
        }
        printf("\n");
    }
    }
    
    return 0;
}