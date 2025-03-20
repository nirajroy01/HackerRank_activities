#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int inc = n;
    int dec = n;
    
    if(n==0 || n==1){
        printf("2");
    }
    
    while(n>1){
        if(dec > 1){
            int flag = 1;
            for(int i=2; i*i<=dec; i++){
                if(dec%i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                printf("%d", dec);
                break;
            }
        }
        dec--;
        
        int bool = 1;
        for(int i=2; i*i<=inc; i++){
            if(inc%i == 0){
                bool = 0;
                break;
            }
        }
        if(bool == 1){
            printf("%d", inc);
            break;
            }
        inc++;  
    }
    
    return 0;
}