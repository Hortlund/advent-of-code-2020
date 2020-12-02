#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f = fopen("input.txt", "r");
    char line[1014];
    char *tok1,*tok2,*tok3,*tok4;
    int min, max, win = 0;

    while(fgets(line, 1024, f)){
        tok1 = strtok(line,"-");
        min = atoi(tok1);
        tok2 = strtok(NULL," ");
        max = atoi(tok2);
        tok3 = strtok(NULL,":");
        tok4 = strtok(NULL," \n");
        int count = 0;
        for(int i = 0; i < strlen(tok4); i++){
            if(tok4[i] == tok3[0]){
                count++;
            }
        }
        if(count >= min && count <= max){
            win++;
        }
        printf("%d\n", count);
    }
    
    printf("%d\n", win);

}