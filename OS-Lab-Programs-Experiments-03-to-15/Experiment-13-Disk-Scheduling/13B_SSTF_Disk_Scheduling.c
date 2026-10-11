#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20], v[20] = {0}, n, h, i, j, k, m, t = 0;
    scanf("%d%d", &n, &h);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Order: ");
    for (i = 0; i < n; i++) {
        m = 9999;
        k = -1;
        for (j = 0; j < n; j++) {
            if (!v[j] && abs(a[j] - h) < m) {
                m = abs(a[j] - h);
                k = j;
            }
        }
        v[k] = 1;
        printf("%d ", a[k]);
        t += m;
        h = a[k];
    }
    printf("\nTotal head movement = %d\n", t);
    return 0;
}
