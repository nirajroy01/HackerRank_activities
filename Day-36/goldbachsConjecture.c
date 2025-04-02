#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int p;
    int q;
    
    if(n%2 == 0 && n>2){
        p=2;
        while(p <= n/2){
            int flag1 = 1;
            for(int i=2; i*i<=p; i++){
                if(p%i == 0){
                    flag1 = 0;
                    break;
                }
            }

            if(flag1 == 1){
                q = n-p;

                int flag2 = 1;
                for(int i=2; i*i<=q; i++){
                    if(q%i == 0){
                        flag2 = 0;
                        break;
                    }
                }

                if(flag2 == 1){
                    printf("%d %d", p,q);
                    break;
                }
            }
            p++;
        }
    }
    else printf("No Solution");
    
    return 0;
}