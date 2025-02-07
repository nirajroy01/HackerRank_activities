#include <stdio.h>

int main() {

    int Y;
    scanf("%d", &Y);
    if(Y > 0){
    if(Y % 100 == 0) {
    if(Y % 400 == 0){
        printf("Yes, %d is a leap year.", Y);
    }
    else{
        printf("No, %d is not a leap year.", Y);
    }
    }
    
    else if(Y % 4 == 0){
        printf("Yes, %d is a leap year.", Y);
    }
    else{
        printf("No, %d is not a leap year.", Y);
    }
    }
    else{
        printf("The given year %d is Invalid year.", Y);
    }   
    return 0;
}