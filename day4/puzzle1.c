#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f = fopen("input.txt", "r");

    char line[256], *p;
    static const char fields[][5] = {"byr:", "iyr:", "eyr:", "hgt:",
                                     "hcl:", "ecl:", "pid:"};
    int count = 0, fin = 0, i;
    
    do {
        p = fgets(line, sizeof(line), f);
        if (!p || line[0] == '\0' || line[0] == '\n')
        {
            
            count += fin == 7;
            fin = 0;
            continue;
        }
        for (i = 0; i < 7; i++)
        {
            fin += !!strstr(line, fields[i]);
        }
    } while(p);
    printf("%d", count);
    fclose(f);
    return 0;
}