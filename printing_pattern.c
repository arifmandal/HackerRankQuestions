#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.


    int i, j;

    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            printf("%d ", abs(i - (n - 1)) > abs(j - (n - 1)) ? abs(i - (n - 1)) + 1 : abs(j - (n - 1)) + 1);
        }
        printf("\n");
    }
    return 0;
}