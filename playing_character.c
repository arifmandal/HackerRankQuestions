#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char character;
    scanf(" %c", &character); 

    char string[100];
    scanf("%s", string);

    char sentence[100];
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", character);
    printf("%s\n", string);
    printf("%s\n", sentence);

       
    return 0;
}