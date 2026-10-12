#include <stdio.h>
#include <string.h>

int main()
{
    char c[3][10];
    char p[][10] = {"P800", "P400", "P100",
                    "P800", "P900", "P300", "P400"};
    int n = 0, k = 0, hits = 0, faults = 0;

    for (int i = 0; i < 7; i++) {
        int hit = 0;

        for (int j = 0; j < n; j++)
            if (!strcmp(c[j], p[i]))
                hit = 1;

        if (hit) {
            hits++;
        } else {
            faults++;

            if (n < 3) {
                strcpy(c[n++], p[i]);
            } else {
                strcpy(c[k], p[i]);
                k = (k + 1) % 3;
            }
        }

        printf("%s -> %s\n",
               p[i], hit ? "HIT" : "PAGE FAULT");
    }

    printf("Hits=%d Faults=%d\n", hits, faults);
    return 0;
}
