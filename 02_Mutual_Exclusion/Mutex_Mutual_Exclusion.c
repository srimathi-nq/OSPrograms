#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void* student(void* id)
{
    printf("Student %ld -> Requesting Computer 101\n", (long)id);

    pthread_mutex_lock(&lock);

    printf("Student %ld -> Computer 101 Allocated\n", (long)id);
    sleep(1);

    printf("Student %ld -> Logged Out (Computer 101 Released)\n",
           (long)id);

    pthread_mutex_unlock(&lock);
    return NULL;
}

int main()
{
    pthread_t s1, s2;

    pthread_create(&s1, NULL, student, (void*)1);
    pthread_create(&s2, NULL, student, (void*)2);

    pthread_join(s1, NULL);
    pthread_join(s2, NULL);

    return 0;
}
