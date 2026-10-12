#include <stdio.h>
#include <string.h>

int main()
{
    char p[][5] = {
        "OS", "DBMS", "DSA", "OS", "CN", "DSA",
        "OS", "DBMS", "CN", "AI", "DSA", "OS"
    };
    char m[5][5];

    int freq[5] = {0};
    int recent[5] = {0};
    int n = 0, hits = 0, faults = 0;

    for (int i = 0; i < 12; i++) {
        int pos = -1;

        for (int j = 0; j < n; j++)
            if (!strcmp(m[j], p[i]))
                pos = j;

        if (pos >= 0) {
            hits++;
            freq[pos]++;
            recent[pos] = i;
        } else {
            faults++;

            if (n < 5) {
                pos = n++;
            } else {
                pos = 0;

                for (int j = 1; j < 5; j++) {
                    if (freq[j] < freq[pos] ||
                        (freq[j] == freq[pos] &&
                         recent[j] < recent[pos])) {
                        pos = j;
                    }
                }
            }

            strcpy(m[pos], p[i]);
            freq[pos] = 1;
            recent[pos] = i;
        }
    }

    printf("Hits=%d\nFaults=%d\nMemory:", hits, faults);

    for (int i = 0; i < n; i++)
        printf(" %s", m[i]);

    printf("\n");
    return 0;
}
