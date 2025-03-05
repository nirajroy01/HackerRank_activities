#include <stdio.h>
                        
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    if(n==-1){
        printf("-1");
    }
    
    n = ~n & (n+1);
    int i=n&1;
    
    if(n!=0){
        int j = 1;
        while(i!=1){
            n >>= 1;
            i = n & 1;
            j++;
        }
        printf("%d",j);
    }
    return 0;
}