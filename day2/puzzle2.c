#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *f = fopen("input.txt", "r");
    char line[1014];
    char *tok1, *tok2, *tok3, *tok4;
    int min, max, win = 0;

    while (fgets(line, 1024, f))
    {
        tok1 = strtok(line, "-");
        min = atoi(tok1);
        tok2 = strtok(NULL, " ");
        max = atoi(tok2);
        tok3 = strtok(NULL, ":");
        tok4 = strtok(NULL, " \n");
        int count = 0;
        if (tok4[min - 1] == tok3[0] ^ tok4[max - 1] == tok3[0])
        {
            win++;
        }
        //printf("%d\n", count);
    }

    printf("%d\n", win);
}