#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int val = 1;

    for(int j = 1; j <= n; j++){  
        for(int k = 1; k <= 2 * (n - j); k++){
            printf(" ");
        }

        int temp = val;
        int middleValue = 0;

        if(j == 1){
            printf("1");
            val += 2;
        } 
        else{
            for(int k = 1; k <= 2 * (j - 1); k++){
                middleValue += temp;
                temp += 2;
            }

            for(int k = 1; k <= 2 * j - 1; k++){
                if(k == j){
                    printf("%d ", middleValue);
                    val -= 2;
                } 
                else{
                    printf("%d ", val);
                }
                val += 2;
            }
        }

        printf("\n");
    }
    return 0;
}