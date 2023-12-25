#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int input = 0;
    int sum = 0;
    scanf("%d", &n);
    int arr[1000] = {0};


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        arr[i] = input;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nsum = %d", sum);
    return 0;
}