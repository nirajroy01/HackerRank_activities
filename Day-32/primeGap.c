#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    int p1 = 0;
    int p2 = 0;
    int res;
    
    for(int i=n+1; i>1; i++){
        int flag = 1;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            p1 = i;
            break;
        }
    }
    
    for(int i=n-1; i>1; i--){
        int flag = 1;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            p2 = i;
            break;
        }
    }
    
    
    
    
        if(p1>p2){
            res = p1-p2;
        }
        else{
            res = p2-p1;
        }
   
    printf("%d", res);
    
    return 0;
}