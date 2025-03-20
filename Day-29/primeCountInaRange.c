#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    
    int count = 0;
    
     for(int i=n1; i<=n2; i++){
        
        if(i<2){
            continue;
        }
        
        int flag = 0;
        for(int j=2; j*j<=i; j++){
            
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            count++;
        }
    }
     printf("%d\n", count);
    
    for(int i=n1; i<=n2; i++){
        
        if(i<2){
            continue;
        }
        
        int flag = 0;
        for(int j=2; j*j<=i; j++){
            
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            printf("%d ", i);
        }
    }
    
   
    
    
    return 0;
}