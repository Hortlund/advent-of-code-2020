#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *f = fopen("input.txt", "r");
    char line[1024];
    int arr[200];

    int i = 0;
    while (fgets(line, 1024, f))
    {
        int a = atoi(line);
        arr[i] = a;
        i++;
    }

    for (int i = 0; i < 200 -2; i++){
        for (int j = i + 1; j < 200 -1; j++){
            for(int k = j + 1; k < 200; k++){
                if (arr[i] + arr[j] + arr[k] == 2020){
                    int solved = arr[i] * arr[j] * arr[k];
                    printf("Answer: %d", solved);
                }
            }
            
        }
    }
}
