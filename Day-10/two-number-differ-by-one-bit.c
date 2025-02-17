#include <stdio.h>

int main() {

    int n1,n2;
    scanf("%d %d", &n1, &n2);
    
    n1 = n1 ^ n2;
   if(n1){
       n1 = n1 & (n1-1);
   switch(n1){
       case 0: printf("Yes");
       break;
       default: printf("No");
       break;
   }
   }
   else{
       printf("No");
   }
    return 0;
}