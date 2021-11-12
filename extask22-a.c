#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct table_row
{
    char title[50];
    char mfg[100];
    short year;
    int price;
};

#define row_count 3
struct table_row row[row_count];

int main()
{
    strcpy(row[0].title,"Video Adapter");
    strcpy(row[0].mfg,"AMD");
    row[0].year = 2020;
    row[0].price = 555555;

    strcpy(row[1].title,"Video A");
    strcpy(row[1].mfg,"Nvidia");
    row[1].year = 2010;
    row[1].price = 5555;

    strcpy(row[2].title,"Adapter");
    strcpy(row[2].mfg,"Noname");
    row[2].year = 1960;
    row[2].price = 55;

    FILE *f = fopen ("extask22.bin","wb+");
    fwrite(row,sizeof(struct table_row),3,f);
    fclose(f);

    for(int i = 0 ; i < row_count;i++)
    {
        printf("%s\t\%s\t%d\t%d\n",row[i].title,row[i].mfg,row[i].year,row[i].price);

        
    }
    char query[50];
  //  printf("query: ");
    fprintf(stdout,"query: ");
    fgets(query,50,stdin);
    for (int i = 0 ; i < row_count; i++)
    if(strcmp(row[i].title,query) == 0) puts (row[i].mfg);
    return 0;
}