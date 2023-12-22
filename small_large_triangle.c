#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    double p[100] = {0};
    double S[100] = {0};
    for (int i = 0; i < n; i++)
    {

        p[i] = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        S[i] = sqrt(p[i] * (p[i] - tr[i].a) * (p[i] - tr[i].b) * (p[i] - tr[i].c));

    }

/*sorting bubble sort*/
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (S[j] > S[j + 1]) {
                double temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;

                triangle temp_tri = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp_tri;
            }
        }
    }
    

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}