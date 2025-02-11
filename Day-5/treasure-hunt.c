#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int path,option,a,choice;
    scanf("%d %d %d %d", &path, &option, &a, &choice);
    
    if(path == 1){
        printf("Player chooses the Left path.\n");
        if(option == 1){
            printf("Poor choice, Game Over!");
        }
        else if(option == 2){
            printf("Player found a bridge.\n");
            if(a == 1){
                printf("Player crosses the bridge safely.\n");
                if(choice == 1){
                     printf("All that glitters is not gold, Game Over!");
                }
                else if(choice == 2){
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if(choice == 3){
                    printf("Congratulations!! You won the treasure.");
                }
            }
            else if(a == 2){
                printf("Poor luck, Game Over!");
            }
        }
    }
    
    else if(path == 2){
        printf("Player chooses the Middle path.\n");
        if(option == 582){
            printf("Player solved the puzzle.\n");
                if(a == 1){
                     printf("All that glitters is not gold, Game Over!");
                }
                else if(a == 2){
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if(a == 3){
                    printf("Congratulations!! You won the treasure.");
                }
        }
        else{
            printf("Foolish player, Game Over!");
        }
    }
    
     else if(path == 3){
        printf("Player chooses the Right path.\n");
        if(option == 30){
            printf("Player solved the puzzle.\n");
                if(a == 1){
                     printf("All that glitters is not gold, Game Over!");
                }
                else if(a == 2){
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if(a == 3){
                    printf("Congratulations!! You won the treasure.");
                }
        }
        else{
            printf("Foolish player, Game Over!");
        }
    }
    return 0;
}