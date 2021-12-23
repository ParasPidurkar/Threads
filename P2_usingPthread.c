/*This is thread need  code */
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* function1( void * args)
{
    while(1){
        sleep(1);
        printf("Hello this is function1\n");
    }
    return NULL;
}

void function2(){
    while(1){
        sleep(2);
        printf("Hi This is function2\n");
    }


}
int main()
{
    pthread_t myThread;
    pthread_create(&myThread,NULL,function1,NULL);
    //function1();
    function2();

}