#include <stdio.h>
#include <string.h>

int main()
{
    char c[3][10];
    char p[][10] = {"P800", "P400", "P100", "P900", "P300"};
    int n = 0;

    for (int i = 0; i < 5; i++) {
        int hit = 0;

        for (int j = 0; j < n; j++)
            if (!strcmp(c[j], p[i]))
                hit = 1;

        if (!hit) {
            if (n < 3)
                strcpy(c[n++], p[i]);
            else
                strcpy(c[0], p[i]);

            printf("%s -> PAGE FAULT\n", p[i]);
        } else {
            printf("%s -> HIT\n", p[i]);
        }
    }

    return 0;
}
