#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;

void* student(void* id)
{
    printf("Student %ld -> Requesting Computer 101\n", (long)id);

    sem_wait(&sem);

    printf("Student %ld -> Computer 101 Allocated\n", (long)id);
    sleep(1);

    printf("Student %ld -> Logged Out (Computer 101 Released)\n",
           (long)id);

    sem_post(&sem);
    return NULL;
}

int main()
{
    pthread_t s1, s2;

    sem_init(&sem, 0, 1);

    pthread_create(&s1, NULL, student, (void*)1);
    pthread_create(&s2, NULL, student, (void*)2);

    pthread_join(s1, NULL);
    pthread_join(s2, NULL);

    sem_destroy(&sem);
    return 0;
}
