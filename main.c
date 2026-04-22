#include <stdio.h>

int soucet(int *a, int *b, int *c){
    return *a + *b + *c;
}

void maximum(int *a, int *b, int *c){
    if(*a < *b && *b > *c){
        printf("Maximum: %d\n", *b);
    }
    else if (*a > *b && *a > *c){
        printf("Maximum: %d\n", *a);
    }
    else{
        printf("Maximum: %d\n", *c);
    }
}

void sudost(int s){
    if(s % 2 == 1){
        printf("Soucet je lichy\n");
    } else{
        printf("Soucet je sudy\n");
    }
}

int main(){
    int a, b, c;

    printf("Napis prvni cislo: ");
    scanf("%d", &a);

    printf("Napis druhe cislo: ");
    scanf("%d", &b);

    printf("Napis treti cislo: ");
    scanf("%d", &c);

    int sou = soucet(&a, &b, &c);

    printf("Soucet: %d\n", sou);
    maximum(&a, &b, &c);
    sudost(sou);

    return 0;
}