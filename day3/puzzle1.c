#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lines[1024 * 1024];
size_t z;
size_t count(int x, int y){
    int row, col, i = 0;
    size_t n = 0;
    //int right = 3, down = 1;
    for (i = row = col = 0; i < z; i = (row += y) * 32 + (col = (col + x) % 31))
    {
        if (lines[i] == '#')
        {
            n++;
        }
    }
    return n;
}

int main(){

    FILE *f = fopen("input.txt", "r");
    z = fread(lines, 1, sizeof(lines), f);
    printf("%zu \n%zu", count(3,1), count(1,1) * count(3,1) * count(5,1) * count(7,1) * count(1,2) );
}