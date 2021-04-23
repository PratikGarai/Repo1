#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h> 	// for pause() and sleep()

// Thread callback should always input and output void*
// And the function should be static
static void* thread_fn_callback(void* arg) 
{
	char* input = (char*)arg;
	while(1) 
	{
		printf("Message : %s\n", input);
		sleep(2);
	}
}

void thread1_create() 
{
	pthread_t pthread1;

	// The input to thread should either be static or something on heap
	// or the data will get destroyed before the thread executes
	static char* input1 = "This is thread 1";
	
	// returns 0 on success or error code on fail
	int rc = pthread_create(&pthread1, 	// the thread object
			NULL, 			
			thread_fn_callback, 	// the methos that the thread will call
			(void*)input1); 	// input to be supplied to the callback
	
	if (rc!=0)
	{
		printf("Error code :  %d",rc);
	}
}


int main() 
{
	thread1_create();
	printf("Main is paused!\n");
	pause();

	return 0;
}
