#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    if(n>=1){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j) % 2 == 0) printf("1");
            else printf("0");
        }
        printf("\n");
      }
    }
    else printf("Shape Not Possible");
    return 0;
}
