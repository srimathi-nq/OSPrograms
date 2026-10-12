#include <stdio.h>

int main()
{
    int pages[] = {10, 2, 5};
    int n = 3;
    int wt = 0, total_wt = 0, total_tat = 0, tat;

    printf("Job\tPages\tWT\tTAT\n");

    for (int i = 0; i < n; i++) {
        tat = wt + pages[i];

        printf("P%d\t%d\t%d\t%d\n",
               i + 1, pages[i], wt, tat);

        total_wt += wt;
        total_tat += tat;
        wt += pages[i];
    }

    printf("Avg WT: %.2f\nAvg TAT: %.2f\n",
           (float)total_wt / n, (float)total_tat / n);

    return 0;
}
