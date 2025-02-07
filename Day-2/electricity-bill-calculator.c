#include <stdio.h>

int main() {

   int n;
    scanf("%d", &n);
    
    float bill;
    float res;
    
    if(n >= 0){
        
        
        if(n <= 100){
            bill = (n * 5);
            res = bill - ((bill * 10) / 100);
            printf("The electricity bill is: %.2f.", res);
        }
        else if(n > 100 && n <= 200){
            bill = ((n - 100) * 7) + 500;
            res = bill - ((bill * 10) / 100);
            printf("The electricity bill is: %.2f.", res);
        }
        else if(n>200 && n <=300){
            bill = ((n - 200) * 7) + 1200;
            printf("The electricity bill is: %.2f.", bill);
        }
        else if(n > 300){
            bill = ((n - 300) * 10) + 1900;
            printf("The electricity bill is: %.2f.", bill);
        }
       
    }
    else{
        printf("Invalid Input!");
    }    
    return 0;
}