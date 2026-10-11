#define _GNU_SOURCE
#include <stdio.h>
#include <pthread.h>
#include <sched.h>

int marks[2][3] = {{85, 90, 78}, {92, 88, 95}};
int total[2] = {0, 0};

void* process_student(void* arg)
{
    int id = *(int*)arg;
    cpu_set_t cs;

    CPU_ZERO(&cs);
    CPU_SET(id, &cs);

    pthread_setaffinity_np(
        pthread_self(), sizeof(cpu_set_t), &cs);

    for (int i = 0; i < 3; i++)
        total[id] += marks[id][i];

    printf("Student %d [Core %d] Report: Total = %d, Average = %.2f\n",
           id + 1, sched_getcpu(), total[id], total[id] / 3.0);

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

    return 0;
}
