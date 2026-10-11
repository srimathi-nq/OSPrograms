#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t lane1, lane2;

void* vehicle1(void* p)
{
    sem_wait(&lane1);
    printf("Vehicle A holds Lane 1\n");
    sleep(1);

    printf("Vehicle A waiting for Lane 2\n");
    sem_wait(&lane2);

    return NULL;
}

void* vehicle2(void* p)
{
    sem_wait(&lane2);
    printf("Vehicle B holds Lane 2\n");
    sleep(1);

    printf("Vehicle B waiting for Lane 1\n");
    sem_wait(&lane1);

    return NULL;
}

int main()
{
    pthread_t x, y;

    sem_init(&lane1, 0, 1);
    sem_init(&lane2, 0, 1);

    pthread_create(&x, NULL, vehicle1, NULL);
    pthread_create(&y, NULL, vehicle2, NULL);

    sleep(3);
    printf("DEADLOCK: Parking lanes are locked by both vehicles.\n");

    return 0;
}
