#include <stdio.h>
#include <pthread.h>

pthread_rwlock_t rwlock = PTHREAD_RWLOCK_INITIALIZER;
int available = 150;

void* traveler(void* num)
{
    pthread_rwlock_rdlock(&rwlock);

    printf("Traveler %ld checks available seats: %d\n",
           (long)num, available);

    pthread_rwlock_unlock(&rwlock);
    return NULL;
}

void* employee(void* data)
{
    pthread_rwlock_wrlock(&rwlock);

    available = 145;
    printf("[EMPLOYEE] Seat availability changed to: %d\n",
           available);

    pthread_rwlock_unlock(&rwlock);
    return NULL;
}

int main()
{
    pthread_t t[3], e;
    long i;

    for (i = 0; i < 3; i++)
        pthread_create(&t[i], NULL, traveler, (void*)(i + 1));

    pthread_create(&e, NULL, employee, NULL);

    for (i = 0; i < 3; i++)
        pthread_join(t[i], NULL);

    pthread_join(e, NULL);

    return 0;
}
