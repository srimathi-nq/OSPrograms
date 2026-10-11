#include <stdio.h>
#define B 20
int main() {
    int d[B] = {0}, ix[B][B], n, i, j, s, k, x, f;
    printf("Files: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Index and size of F%d: ", i);
        scanf("%d%d", &x, &s);
        if (x < 0 || x >= B || s < 1 || s >= B || d[x]) {
            puts("Invalid");
            continue;
        }
        f = 0;
        for (j = 0; j < B; j++)
            if (!d[j])
                f++;
        if (f - 1 < s) {
            puts("No space");
            continue;
        }
        d[x] = 1;
        k = 0;
        for (j = 0; j < B && k < s; j++) {
            if (!d[j]) {
                d[j] = 1;
                ix[x][k++] = j;
            }
        }
        printf("F%d Index=%d Data:", i, x);
        for (j = 0; j < k; j++)
            printf(" %d", ix[x][j]);
        puts("");
    }
    return 0;
}
