#include <stdio.h>
#include<math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c;
    scanf("%d %d %d ", &a,&b,&c);
    
    int D = (b*b) - 4*a*c;
    
    if(D>0){
        double root1 = (-b + sqrt(D)) / (2.0*a);
        double root2 = (-b - sqrt(D)) / (2.0*a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
        printf("Type: Real and Distinct");
    }
    else if(D == 0){
        double root1 = (-b  / (2.0*a));
        printf("Roots: %.2f, %.2f\n", root1, root1);
        printf("Type: Real and Equal");
    }
   else{
       double root1 = -b  / (2.0*a);
       double root2 =  sqrt(-D) / (2.0*a);
       printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", root1,root2,root1,root2);
       printf("Type: Complex");
   }
    return 0;
}