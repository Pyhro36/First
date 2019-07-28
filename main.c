#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    const int MAX = 100;
    const int MIN = 1;
    int mystere = (rand() % (MAX - MIN + 1) + MIN);
    int select = 0;

    do
    {
        printf("choisis  un nombre : \n");
        scanf("%d", &select);

        if(select>mystere)
            printf("trop haut !\n");
        else if(select<mystere)
            printf("trop bas !\n");
        else
            printf("trouve !\n");

    }while(select != mystere);

    return 0;
}
