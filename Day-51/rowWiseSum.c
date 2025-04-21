#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1, n2, num;
    scanf("%d %d", &n1, &n2);
    
    for(int i=0; i<n1; i++){
        int sum = 0;
        for(int j=0; j<n2; j++){
            scanf("%d", &num);
            sum += num;
        }
        printf("%d ", sum);
    }
    return 0;
}
