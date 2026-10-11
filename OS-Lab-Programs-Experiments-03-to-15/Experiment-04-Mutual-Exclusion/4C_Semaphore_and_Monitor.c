#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;
pthread_mutex_t monitor_lock = PTHREAD_MUTEX_INITIALIZER;

void request_comp(long id)
{
    pthread_mutex_lock(&monitor_lock);
    printf("Student %ld -> Requesting Computer 101\n", id);
    pthread_mutex_unlock(&monitor_lock);

    sem_wait(&sem);
    printf("Student %ld -> Computer 101 Allocated\n", id);
    sleep(1);
}

void release_comp(long id)
{
    printf("Student %ld -> Logged Out (Computer 101 Released)\n", id);
    sem_post(&sem);
}

void* student(void* id)
{
    request_comp((long)id);
    release_comp((long)id);
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
