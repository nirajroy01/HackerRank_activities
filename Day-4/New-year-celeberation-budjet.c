#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    scanf("%d %d %d %d %d %d", &budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
   
    int a;
    
    if(budget > 0){
        
        if(numGuests > 5 && numGuests <= 50){
              if(decorationCost < ((budget * 30) / 100) || ((numGuests * foodCostPerGuest) < ((budget * 50) / 100))){ 
                if(numGuests > 25){
                    if(musicCost > 0){
                        a = (numGuests * foodCostPerGuest) + decorationCost + musicCost + extraExpenses;
                        if(budget >= a){
                            printf("Celebration Approved");
                        }
                        else{
                            printf("Celebration Denied");
                        }
                    } 
                    else{
                         printf("Celebration Denied");
                    }
                }
                  else{
                       a = (numGuests * foodCostPerGuest) + decorationCost + musicCost + extraExpenses;
                        if(budget >= a){
                            printf("Celebration Approved");
                        }
                        else{
                            printf("Celebration Denied");
                        }
                  }
            }
            else{
                            printf("Celebration Denied");
                        }
        }
        else{
                            printf("Celebration Denied");
                        }
    }
    else{
                            printf("Celebration Denied");
                        }
    
    return 0;
}