#include <stdio.h>
#include <stdlib.h>
#define months 12
int main()
{
    int zarplata[months];

#define zarplata_min 1000
#define zarplata_max 5000

    for (int i =0; i<months;i++)

    zarplata[i] = zarplata_min +rand() % (zarplata_max-zarplata_min+1);

    for(int i=0;i<months;i++)

   printf("% 6d",(i+1));

   printf("\n");

    for(int i=0;i<months;i++)

    printf("% 4d",zarplata[i]);

    printf("\n");

float nal_god =0.0f;
for (int i=0 ; i< months;i++)       
{
   float nal =zarplata[i] *0.02f;
   nal_god+=nal;
    printf("%5.1f",nal);
}
     printf("\n");
     

    int god_sum = 0;

    for (int i=0 ; i< months;i++)

    god_sum += zarplata[i];

    printf("god_sum = %d\n",god_sum);

      int god_avg = 0;

    for (int i=0 ; i< months;i++)

    god_avg = god_sum/(float) months;
    printf("nal_god= %.2f\n",nal_god);
    printf("god_avg = %.2d\n",god_avg);

    return 0;

}