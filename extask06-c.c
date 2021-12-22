#include <stdio.h>
#include <stdlib.h>

#define n 31
#define pmin 740
#define pmax 780
#define pnorm 760
int pressure[n];

void file()
{
    FILE *f = fopen("extask06-in.txt", "r");
    
    if (f == NULL) puts("failed to open file.");
    else
    {
        for (int i = 0; i < days_of_month; i++)
            fscanf(f, "%d", &pressure[i]);
    }
    fclose(f);
}

void rand1()
{
    printf("arr: ");
    for (int i = 0; i < days_of_month; i++)
    {
        if (i % 7 == 0) printf("\n");
        pressure[i] = pmin + rand() % (pmax - pmin + 1);
        printf("%d ", pressure[i]);
    }
    printf("\n");
}

int main()
{
    printf("arr: ");
for (int i=0; i < n; i++)

    {
        pressure[i] =  740+rand() % (pmax-pmin +1);
        printf("%d ", pressure[i]);
    }
printf("\n");

int below = 0;
int excat = 0;
int above = 0;

for (int i = 0; i < n; i++)
{
    if (pressure[i]<pnorm) below++;
    if (pressure[i]==pnorm) excat++;
    if (pressure[i]>pnorm) above++;
}
printf("below: %d\n",below);
printf("excat: %d\n",excat);
printf("above: %d\n",above);

return 0;
}


/*Спросить про дни++,принты*/