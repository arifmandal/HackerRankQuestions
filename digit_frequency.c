#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char input[1000] = "";
    char number = '0';
    int count = 0;
    int frequency[10] = {0};

    scanf("%s", &input);

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < strlen(input); i++)
        {

        if (input[i] == number)
        {
            frequency[count]++;
        }
        
        }
        count++;
        number++;
    }
    
    

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", frequency[i]);
    }
    
    return 0;
}