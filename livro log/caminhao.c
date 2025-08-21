#include <stdio.h>

int main() {

    int frios, potes, total;

    printf("Informe total de frios: ");
    scanf("%d", &total);
    
    frios <- total;
        
    potes = (500 * (1 - frios / 200));
    
    if (frios <= 200)
    {
        printf("Potes: %.2d - total.", potes);
    }
    else if ( frios > 200)
    {
        printf("quantidade de frios exede");
    }
    
    return 0;

}
