#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Кол-во оценок");
    scanf("%d", &n);

    int o[n];
    float sum;
    printf("Введите кол-во оценок(в ряд)");
    for(int i=0; i < n;i++)
    {
        scanf("%d", &o[i]);
        if (o[i]<2 || o[i]>5)
    
    {
        printf("Оценки могут быть только от 2 до 5\n");
        return 0;
    }

    sum +=o[i];
}
float avg = sum /n;
printf ("Средний балл %.1f\n",avg);

if(avg < 4.6)
printf("Не подходишь\n");
else 
printf ("Подходишь\n");

    return 0;
}