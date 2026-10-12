#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t L1, L2;

void* park(void* p)
{
    int n = *(int*)p;

    sem_wait(&L1);
    printf("Vehicle %d reserved Lane 1\n", n);

    sem_wait(&L2);
    printf("Vehicle %d entered parking area\n", n);

    sem_post(&L2);
    sem_post(&L1);

    return NULL;
}

int main()
{
    pthread_t p, q;
    int x = 1, y = 2;

    sem_init(&L1, 0, 1);
    sem_init(&L2, 0, 1);

    pthread_create(&p, NULL, park, &x);
    pthread_create(&q, NULL, park, &y);

    pthread_join(p, NULL);
    pthread_join(q, NULL);

    sem_destroy(&L1);
    sem_destroy(&L2);

    printf("All vehicles parked safely. No deadlock occurred.\n");
    return 0;
}
