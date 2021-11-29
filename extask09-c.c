#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define days 31
    float *coff = (float *) malloc(days * sizeof(float));

    FILE *f = fopen("text", "r");
    
    if (f == NULL) puts("failed to open file.");
	else
	{
        for (int i = 0; i < days; i++)
            fscanf(f, "%f", &coff[i]);
    }
    fclose(f);

    #define coff_lo 10.0f
    #define coff_hi 50.0f

    for (int i = 0; i < days; i++)
    {
        printf("% 6.2f", coff[i]);
        if (i % 7 == 6) printf("\n");
    }
    if (days % 7 > 0) printf("\n");
    
    float cmin = coeff_hi;
    float cmax = coeff_lo;
    for (int i = 0; i < days; i++)
    {
        if (coff[i] < cmin) cmin = coff[i];
        if (coff[i] > cmax) cmax = coff[i];
    }

#define set_blue printf("\033[1;34m")
#define set_yellow printf("\033[1;33m")
#define set_default printf("\033[0m")

    printf("min = \033[1;34m %.2f\n", cmin); set_default;
    printf("max = \033[1;33m %.2f\n", cmax); set_default;
    
    free(coff);

    return 0;
}