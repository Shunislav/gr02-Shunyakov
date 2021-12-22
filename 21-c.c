#include <stdio.h> 
#include <string.h> 

#define max_txt 256

int main()
{
    FILE *f1 = fopen("extask21.txt", "r");
    FILE *f2 = fopen("extask21-out.txt", "w+");

    int i = 1;
    
    while (1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f1) == NULL) break;
        
        char *c = strchr(s, '\n');
        if (c != NULL) *c = '\0';
        
        fprintf(f2, "%d %s\n", i, s);        
        i++;
    }

    fclose(f1);
    fclose(f2);
    struct letter let_count[256];
    
    for (int i = ' '; i <= '~'; i++)
    {
        let_count[i - ' '].let = i;
        let_count[i - ' '].ind = 0;
    }

    FILE *f3 = fopen("extask21-c-in.txt", "r");
    while (1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f3) == NULL) break;
        
        char *c = strchr(s, '\n');
        if (c != NULL) *c = '\0';
        
        int ls = strlen(s);
        for (int i = 0; i < ls; i++)
        {
            char c = s[i];
            for (int j = 0; j < 95; j++)
                if (c == let_count[j].let) let_count[j].ind++;
        }
        //nepoln
    
    return 0;
}