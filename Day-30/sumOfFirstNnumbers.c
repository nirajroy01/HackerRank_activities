#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    int count = 0;
    int sum = 0;
    
    int i = 2;
    while(count < n){
        
        int flag = 1;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            sum = sum + i;
            count++;
            }
        i++;
    }
    printf("%d", sum);
    return 0;
}