#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20], n, h, i, t = 0;
    scanf("%d%d", &n, &h);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        t += abs(a[i] - h);
        h = a[i];
    }
    printf("\nTotal head movement = %d\n", t);
    return 0;
}
