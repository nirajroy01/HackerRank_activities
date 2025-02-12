#include <stdio.h>

int main() {

   int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int i1,num1;
    int i2,num2;
    int i3,num3;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    scanf("%d %d",&i1,&num1);
    scanf("%d %d",&i2,&num2);
    scanf("%d %d",&i3,&num3);
    
    switch(i1){
        case 0: n0 = n0 + num1;
            if(n0 > 9){
                n0 = n0 % 10;
            }
            break;
        case 1: n1 = n1 + num1;
            if(n1 > 9){
                n1 = n1 % 10;
            }
            break;
        case 2: n2 = n2 + num1;
            if(n2 > 9){
                n2 = n2 % 10;
            }
            break;
        case 3: n3 = n3 + num1;
            if(n3 > 9){
                n3 = n3 % 10;
            }
            break;
        case 4: n4 = n4 + num1;
            if(n4 > 9){
                n4 = n4 % 10;
            }
            break;
        case 5: n5 = n5 + num1;
            if(n5 > 9){
                n5 = n5 % 10;
            }
            break;
        case 6: n6 = n6 + num1;
            if(n6 > 9){
                n6 = n6 % 10;
            }
            break;
        case 7: n7 = n7 + num1;
            if(n7 > 9){
                n7 = n7 % 10;
            }
            break;
        case 8: n8 = n8 + num1;
            if(n8 > 9){
                n8 = n8 % 10;
            }
            break;
        case 9: n9 = n9 + num1;
            if(n9 > 9){
                n9 = n9 % 10;
            }
            break;
    }
    
    switch(i2){
        case 0: n0 = n0 + num2;
            if(n0 > 9){
                n0 = n0 % 10;
            }
            break;
        case 1: n1 = n1 + num2;
            if(n1 > 9){
                n1 = n1 % 10;
            }
            break;
        case 2: n2 = n2 + num2;
            if(n2 > 9){
                n2 = n2 % 10;
            }
            break;
        case 3: n3 = n3 + num2;
            if(n3 > 9){
                n3 = n3 % 10;
            }
            break;
        case 4: n4 = n4 + num2;
            if(n4 > 9){
                n4 = n4 % 10;
            }
            break;
        case 5: n5 = n5 + num2;
            if(n5 > 9){
                n5 = n5 % 10;
            }
            break;
        case 6: n6 = n6 + num2;
            if(n6 > 9){
                n6 = n6 % 10;
            }
            break;
        case 7: n7 = n7 + num2;
            if(n7 > 9){
                n7 = n7 % 10;
            }
            break;
        case 8: n8 = n8 + num2;
            if(n8 > 9){
                n8 = n8 % 10;
            }
            break;
        case 9: n9 = n9 + num2;
            if(n9 > 9){
                n9 = n9 % 10;
            }
            break;
    }
    
    
    switch(i3){
        case 0: n0 = n0 + num3;
            if(n0 > 9){
                n0 = n0 % 10;
            }
            break;
        case 1: n1 = n1 + num3;
            if(n1 > 9){
                n1 = n1 % 10;
            }
            break;
        case 2: n2 = n2 + num3;
            if(n2 > 9){
                n2 = n2 % 10;
            }
            break;
        case 3: n3 = n3 + num3;
            if(n3 > 9){
                n3 = n3 % 10;
            }
            break;
        case 4: n4 = n4 + num3;
            if(n4 > 9){
                n4 = n4 % 10;
            }
            break;
        case 5: n5 = n5 + num3;
            if(n5 > 9){
                n5 = n5 % 10;
            }
            break;
        case 6: n6 = n6 + num3;
            if(n6 > 9){
                n6 = n6 % 10;
            }
            break;
        case 7: n7 = n7 + num3;
            if(n7 > 9){
                n7 = n7 % 10;
            }
            break;
        case 8: n8 = n8 + num3;
            if(n8 > 9){
                n8 = n8 % 10;
            }
            break;
        case 9: n9 = n9 + num3;
            if(n9 > 9){
                n9 = n9 % 10;
            }
            break;
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    return 0;
}