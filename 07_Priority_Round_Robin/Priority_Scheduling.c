#include <stdio.h>

int main()
{
    int bt[] = {7, 3, 5};
    int priority[] = {2, 3, 1};
    int order[] = {2, 0, 1};
    int ct[3], wt[3], tat[3];
    int time = 0;

    for (int i = 0; i < 3; i++) {
        int x = order[i];

        time += bt[x];
        ct[x] = time;
        tat[x] = ct[x];
        wt[x] = tat[x] - bt[x];
    }

    printf("Process\tBT\tPriority\tCT\tWT\tTAT\n");

    for (int i = 0; i < 3; i++)
        printf("P%d\t%d\t%d\t\t%d\t%d\t%d\n",
               i + 1, bt[i], priority[i],
               ct[i], wt[i], tat[i]);

    return 0;
}
