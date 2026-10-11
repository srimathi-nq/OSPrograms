#include <stdio.h>

int main()
{
    int id[] = {1, 2, 3};
    int pages[] = {6, 9, 2};
    int n = 3;
    int wt = 0, total_wt = 0, total_tat = 0, tat;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pages[i] > pages[j]) {
                int t = pages[i];
                pages[i] = pages[j];
                pages[j] = t;

                t = id[i];
                id[i] = id[j];
                id[j] = t;
            }
        }
    }

    printf("Job\tPages\tWT\tTAT\n");

    for (int i = 0; i < n; i++) {
        tat = wt + pages[i];

        printf("P%d\t%d\t%d\t%d\n",
               id[i], pages[i], wt, tat);

        total_wt += wt;
        total_tat += tat;
        wt += pages[i];
    }

    printf("Avg WT: %.2f\nAvg TAT: %.2f\n",
           (float)total_wt / n, (float)total_tat / n);

    return 0;
}
