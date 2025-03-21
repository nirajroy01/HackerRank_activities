#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int count = 0;
    
   
    for (int i=2; i<=n; i++){
        int num = i;
        int check = 0;
        
        for (int j=2; j*j <= num; j++){
            while(num % j == 0){
                check++;
                num = num / j;
            }
        }
        if (num > 1){
            check++;
          
        }
        if (check == 2)
            count++;
    }
    
    printf("%d", count);
    return 0;
}