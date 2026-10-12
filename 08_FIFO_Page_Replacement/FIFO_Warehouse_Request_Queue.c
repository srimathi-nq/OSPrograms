#include <stdio.h>

int main()
{
    char p[][10] = {"P800", "P400", "P100", "P900", "P300"};

    printf("FIFO Warehouse Order:\n");

    for (int i = 0; i < 5; i++)
        printf("%s -> Processed\n", p[i]);

    return 0;
}
