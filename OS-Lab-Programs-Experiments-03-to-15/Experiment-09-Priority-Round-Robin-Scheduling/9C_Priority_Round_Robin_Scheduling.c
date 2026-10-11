#include <stdio.h>

int main()
{
    int bt[] = {6, 4, 5};
    int rem[] = {6, 4, 5};
    int priority[] = {1, 2, 1};
    int ct[3], wt[3], tat[3];
    int tq = 2, time = 0, completed = 0;

    while (completed < 2) {
        for (int i = 0; i < 3; i++) {
            if (rem[i] > 0 && priority[i] == 1) {
                if (rem[i] > tq) {
                    time += tq;
                    rem[i] -= tq;
                } else {
                    time += rem[i];
                    rem[i] = 0;
                    ct[i] = time;
                    completed++;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (rem[i] > 0 && priority[i] == 2) {
            time += rem[i];
            rem[i] = 0;
            ct[i] = time;
            completed++;
        }
    }

    for (int i = 0; i < 3; i++) {
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("Process\tBT\tPriority\tCT\tWT\tTAT\n");

    for (int i = 0; i < 3; i++)
        printf("P%d\t%d\t%d\t\t%d\t%d\t%d\n",
               i + 1, bt[i], priority[i],
               ct[i], wt[i], tat[i]);

    return 0;
}
