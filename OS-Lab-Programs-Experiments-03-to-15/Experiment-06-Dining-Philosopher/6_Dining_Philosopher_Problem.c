#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t rail[4];

void* dispatch(void* p)
{
    int n = *(int*)p;
    int x = n;
    int y = (n + 1) % 4;
    int t;

    if (x > y) {
        t = x;
        x = y;
        y = t;
    }

    printf("Train %d: Route T%d-T%d requested\n", n + 1, x + 1, y + 1);

    sem_wait(&rail[x]);
    sem_wait(&rail[y]);

    printf("Train %d: Route cleared\n", n + 1);

    sem_post(&rail[y]);
    sem_post(&rail[x]);

    printf("Train %d: Route released\n", n + 1);

    return NULL;
}

int main()
{
    pthread_t tr[4];
    int id[4] = {0, 1, 2, 3};

    for (int i = 0; i < 4; i++) {
        sem_init(&rail[i], 0, 1);
        pthread_create(&tr[i], NULL, dispatch, &id[i]);
    }

    for (int i = 0; i < 4; i++)
        pthread_join(tr[i], NULL);

    for (int i = 0; i < 4; i++)
        sem_destroy(&rail[i]);

    printf("Dispatcher: All routes completed safely.\n");
    return 0;
}
