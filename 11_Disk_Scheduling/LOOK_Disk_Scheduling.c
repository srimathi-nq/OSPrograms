#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}
int main() {
    int a[20], n, h, s, i, t = 0;
    scanf("%d%d", &n, &h);
    s = h;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    printf("Order: ");
    for (i = 0; i < n; i++) {
        if (a[i] >= s) {
            printf("%d ", a[i]);
            t += a[i] - h;
            h = a[i];
        }
    }
    for (i = n - 1; i >= 0; i--) {
        if (a[i] < s) {
            printf("%d ", a[i]);
            t += h - a[i];
            h = a[i];
        }
    }
    printf("\nTotal head movement = %d\n", t);
    return 0;
}
