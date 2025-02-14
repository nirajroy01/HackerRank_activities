#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,a,b,c,d,A,B,C,D;
     scanf("%d", &n);
    
         if(n == 0){
            printf("Circle");
        }
    
        else if(n == 3){
         scanf("%d %d %d %d %d %d", &a,&b,&c,&A,&B,&C);
        if(a>0 && b>0 && c>0 && C>0 && A>0 && B>0 && (A+B+C == 180)){
            if(a+b<=c || b+c<=a || a+c<=b){
                printf("Invalid Figure");
            }
            else if((a == b && b == c && a == c) && (A == B && B == C && A == C)){
                printf("Equilateral Triangle");
            }
             else if((a == b && a != c && A == B && A != C) || (a == c && a != b && A == C && A != B) || (b == c && a !=                     c && B == C && A != B)){
                    printf("Isosceles Triangle");
                }
            else if((a != b && a != c && b != c) && (A != B && B != C && A !=C)){
                 printf("Scalene Triangle");
            }
            else{
                    printf("Invalid Figure");
                }
        }
        else{
                printf("Invalid Figure");
        }
    }
           
    if(n == 4){
        scanf("%d %d %d %d %d %d %d %d", &a,&b,&c,&d,&A,&B,&C,&D);
        if(a>0 && b>0 && c>0 && d>0 && A>0 && B>0 && C>0 && D>0 && (A+B+C+D == 360)){
            if((a ==b && b == c && c == d) && (A == B && B == C && C == D && A == D)){
                 printf("Square");
            }
            else if((a == c && b == d && a != b) && (A == B && B == C && C == D && D == A)){
                    printf("Rectangle");
            }
            else if((a == b && b == c && c == d) && (A == C && B == D && A != B) && (A+B == 180)){
                    printf("Rhombus");
            }
            else if((a == c && b == d && a != b) && (A == C && B == D && A != B) && (A+B == 180)){
                    printf("Parallelogram");
            }
            else{
                    printf("Invalid Figure");
            }
        }
        else{
                    printf("Invalid Figure");
        }
           
        
    }

    
    

    return 0;
}