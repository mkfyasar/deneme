#include "get.h"

int backslash(char *diz)
{
    int i = 0;
    while(diz[i] != '\0')
    {
        if(diz[i] == '\n')
        {
            printf("slash bulundu\n");
            i++;
        }
        else
            printf("slash bulunamadı\n");
        i++;
    }
    i++;
    return 0 ;
}

