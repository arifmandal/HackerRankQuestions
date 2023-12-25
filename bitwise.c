#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int andOperation(int a, int b){

    return a & b;
}

int orOperation(int a, int b){

    return a | b;
}

int xorOperation(int a, int b){

    return a ^ b;
}

int calculateand(int n, int k){

    int andResults[n];
    int count = 0;
    int andmax =0;

    //printf("and\n");
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            andResults[count] = andOperation(i, j);
            if (andResults[count] < k)
            {
                if (andResults[count] >= andmax )
                {
                    andmax = andResults[count];
                }
            }          
            count++;
            
        }
    }

/*
    printf("Sonuclar:\n");
    for (int i = 0; i < count; i++) {
            printf("%d", andResults[i]);
            printf("\n");
    }
*/
    //printf("%d\n", andmax);
    return andmax;


}

int calculateor(int n, int k){

    int orResults[n];
    int count = 0;
    int ormax =0;

    //printf("or\n");
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            orResults[count] = orOperation(i, j);
            if (orResults[count] < k)
            {
                if (orResults[count] >= ormax )
                {
                    ormax = orResults[count];
                }
            }  
            count++;
        }
    }
/*
    printf("Sonuclar:\n");
    for (int i = 0; i < count; i++) {
            printf("%d", orResults[i]);
            printf("\n");
    }
*/
     //printf("%d\n", ormax);
     return ormax;


}

int calculatexor(int n, int k){

    int xorResults[n];
    int count = 0;
    int xormax =0;

    //printf("xor\n");
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            xorResults[count] = xorOperation(i, j);
            if (xorResults[count] < k)
            {
                if (xorResults[count] >= xormax )
                {
                    xormax = xorResults[count];
                }
            } 
            count++;
        }
    }
/*
    printf("Sonuclar:\n");
    for (int i = 0; i < count; i++) {
            printf("%d", xorResults[i]);
            printf("\n");
    }
*/
    
    //printf("%d\n", xormax);
    return xormax;


}

void calculate_the_maximum(int n, int k) {
    
    int andmax = calculateand(n,k);
    int ormax  = calculateor(n, k);
    int xormax = calculatexor(n, k);
    printf("%d\n%d\n%d\n", andmax, ormax, xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}