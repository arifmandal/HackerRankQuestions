#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    double k,l;
    scanf("%d %d" "%lf" "%lf", &n, &m, &k, &l);
    printf("%d %d\n" "%.1lf " "%.1lf", n+m, n-m, k+l, k-l);
    return 0;
}