#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int long n;
    scanf("%ld", &n);

    if (n < 0){
        n = -n;
    }

    int count = 0;

    while (n > 1){
        int rem = n % 10;
        int is_prime = 0;

        if (rem == 2 || rem == 3 || rem == 5 || rem == 7){
            is_prime = 1;
        } else if (rem > 1){
            int flag = 1;
            for (int i = 2; i * i <= rem; i++){
                if (rem % i == 0){
                    flag = 0;
                    break;
                }
            }
            if (flag == 1){
                is_prime = 1;
            }
        }
      
        if (is_prime){
            count++;
        }
        n = n / 10;
    }

    printf("%d", count);
    
    
    return 0;
}