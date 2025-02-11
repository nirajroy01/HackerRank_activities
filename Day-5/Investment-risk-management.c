#include <stdio.h>

int main() {

    int age, income, rt;
    scanf("%d %d %d", &age, &income, &rt);
    
      if(age > 0 && age < 30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age <= 50){
        if(income > 75000){
            if(rt == 3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else{
               printf("Medium Risk Portfolio: Balanced risk for moderate returns.");  
            }
        }
        else if(income > 30000 && income <= 75000){
            if(rt == 2){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
        }
        else{
            if(rt == 1 || rt == 2){
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        }
    }
    
    else if(age > 50){
        if(income > 75000){
            if(rt == 3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
               }
            else{
                printf("Low Risk Portfolio: Suitable for conservative investments."); 
               }
        }
        else{
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }
     
    return 0;
}