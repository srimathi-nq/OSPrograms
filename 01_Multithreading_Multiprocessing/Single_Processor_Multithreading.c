#include <stdio.h>
#include <pthread.h>

int marks[2][3] = {{85, 90, 78}, {92, 88, 95}};
int total[2] = {0, 0};

void* process_student(void* arg)
{
    int id = *(int*)arg;

    for (int i = 0; i < 3; i++)
        total[id] += marks[id][i];

    return NULL;
}

int main()
{
    pthread_t t[2];
    int id[2] = {0, 1};

    for (int i = 0; i < 2; i++)
        pthread_create(&t[i], NULL, process_student, &id[i]);

    for (int i = 0; i < 2; i++)
        pthread_join(t[i], NULL);

    for (int i = 0; i < 2; i++)
        printf("Student %d Report: Total = %d, Average = %.2f\n",
               i + 1, total[i], total[i] / 3.0);

    return 0;
}
