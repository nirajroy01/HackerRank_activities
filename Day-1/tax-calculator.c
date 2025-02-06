#include <stdio.h>

int main() {

    float income;
    scanf("%f", &income);
    
    if(income >= 0){
        if(income <= 250000){
            printf("0.00");
        }
        else if(income > 250000 && income <= 500000){
            float tax = ((income - 250000) * 5) / 100;
            printf("%.2f", tax);
        }
        else if(income > 500000 && income <= 1000000){
            float tax = (((income - 500000) * 20) / 100) + 12500.00;
            printf("%.2f", tax);
        }
         else{
            float tax = (((income - 1000000) * 30) / 100) + 112500.00;
            printf("%.2f", tax);
        }
    }
    
    else{
        printf("INVALID");
    }       
    return 0;
}