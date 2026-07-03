#include <stdio.h>

int main(){
    char type;
    float r,a,ar,br,at,bt;
    printf("What do you want to work with?\nfor,\n circle enter c\n sqaure enter s\n rectengle enter r\n triangle enter t\n\n enter your choice: ");
    scanf("%c", &type);
    if(type=='c'){
        printf("\nEnter the radius of the circle: ");
        scanf("%f",&r);
        printf("\nArea of circle: %.2f", 3.1416*r*r);
    }
    else if(type=='s'){
        printf("\nEnter side length: ");
        scanf("%f",&a);
        printf("\nArea of square: %.2f", a*a);
    }
    else if(type=='r'){
        printf("\nEnter length: ");
        scanf("%f",&ar);
        printf("Enter width: ");
        scanf("%f",&br);
        printf("\nArea of rectangle: %.2f", ar*br);
    }
    else if(type=='t'){
        printf("\nEnter base: ");
        scanf("%f",&at);
        printf("Enter height: ");
        scanf("%f",&bt);
        printf("\nArea of rectangle: %.2f", at*bt*.5);
    }
    else{
        printf("\nTYPE ERROR!!!!");
    }
    return 0;
}