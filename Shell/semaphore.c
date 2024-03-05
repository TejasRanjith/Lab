#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#define NUM_THREADS 5
#define MAX_RESOURCES 5
int resources = MAX_RESOURCES;
sem_t semaphore;
void *thread_func(void *thread_id)
{
	int tid=*((int *)thread_id);
	sem_wait(&semaphore);
	if(resources>0)
	{
		printf("Thread %d using resource,remaining resource:%d\n",tid,--resources);
	}
	else
	{
		printf("Thread %d cannot acquire resource\n",tid);
	}
	sem_post(&semaphore);
	
	pthread_exit(NULL);
	
}

int main()
{
	pthread_t threads[NUM_THREADS];
	int thread_ids[NUM_THREADS];
	int i;
	
	sem_init(&semaphore,0,1);
	
	for(i=0;i<NUM_THREADS;i++)
	{
		thread_ids[i]=i;
		pthread_create(&threads[i],NULL,thread_func,(void *)&thread_ids[i]);
	}
	
	sem_destroy(&semaphore);
	
	return 0;
}