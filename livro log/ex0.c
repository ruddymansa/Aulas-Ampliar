/*
Digitar dois números e calcular o menor
*/
#include <stdio.h>

int main() {
    int x , y;

    printf("Informe o primeiro numero: ");
    scanf("%d", &x);
    printf("Informe o segundo numero: ");
    scanf("%d", &y);

    if(x > y){
        printf("X: %d", x);
    }
    else
    {
        printf("Y: %d", y);
    }

    return 0;
}