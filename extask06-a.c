#include <stdio.h>
#include <stdlib.h>

#define n 31
#define pmin 740
#define pmax 780
#define pnorm 760
int pressure[n];



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