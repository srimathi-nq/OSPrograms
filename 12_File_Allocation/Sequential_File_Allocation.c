#include <stdio.h>
#define B 20
int main() {
    int d[B] = {0}, n, i, j, s, p, ok;
    printf("Files: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Start and size of F%d: ", i);
        scanf("%d%d", &p, &s);
        ok = (p >= 0 && s > 0 && p + s <= B);
        for (j = p; ok && j < p + s; j++)
            if (d[j])
                ok = 0;
        if (ok) {
            printf("F%d: ", i);
            for (j = p; j < p + s; j++) {
                d[j] = 1;
                printf("%d ", j);
            }
            puts("");
        } else {
            puts("Invalid start or blocks occupied");
        }
    }
    return 0;
}
