/*This is thread need  code */
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
//The main ends in this function so we have as the main will not stop for thread or process to finish
//we are not using while(1) here
/*
void* function1( void * args)
{
    for(int i=0;i<9;i++){
        sleep(1);
        printf("Hello this is function1\n");
    }
    return NULL;
}

void function2(){
    for(int i=0;i<2;i++){
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


*/



void* function1( void * args)
{
    for(int i=0;i<9;i++){
        sleep(1);
        printf("Hello this is function1 %d\n",i);
    }
    return NULL;
}

void function2(){
    for(int i=0;i<2;i++){
        sleep(2);
        printf("Hi This is function2   %d\n",i);
    }


}
int main()
{
    pthread_t myThread;
    pthread_create(&myThread,NULL,function1,NULL);
    pthread_join(myThread,NULL);
    //function1();
    function2();

}
