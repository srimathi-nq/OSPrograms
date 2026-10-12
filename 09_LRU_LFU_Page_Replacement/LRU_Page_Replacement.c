#include <stdio.h>
#include <string.h>

int main()
{
    char p[][5] = {
        "OS", "DBMS", "DSA", "OS", "CN", "DSA",
        "OS", "DBMS", "CN", "AI", "DSA", "OS"
    };
    char m[5][5];

    int n = 0, hits = 0, faults = 0;

    for (int i = 0; i < 12; i++) {
        int pos = -1;

        for (int j = 0; j < n; j++)
            if (!strcmp(m[j], p[i]))
                pos = j;

        if (pos >= 0) {
            hits++;

            for (int k = pos; k < n - 1; k++)
                strcpy(m[k], m[k + 1]);

            strcpy(m[n - 1], p[i]);
        } else {
            faults++;

            if (n < 5) {
                strcpy(m[n++], p[i]);
            } else {
                for (int k = 0; k < 4; k++)
                    strcpy(m[k], m[k + 1]);

                strcpy(m[4], p[i]);
            }
        }
    }

    printf("Hits=%d\nFaults=%d\nMemory:", hits, faults);

    for (int i = 0; i < n; i++)
        printf(" %s", m[i]);

    printf("\n");
    return 0;
}
