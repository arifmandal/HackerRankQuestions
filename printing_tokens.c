#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char input[1000] = "";
    char token = ' ';
    fgets(input, sizeof(input), stdin);

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == token)
        {
            input[i] = '\n';
        }
    }

    printf("%s", input);
    return 0;
}
