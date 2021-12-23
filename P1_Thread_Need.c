/*This is thread need  code */
#include<stdio.h>
#include<unistd.h>

void function1()
{
    while(1){
        sleep(1);
        printf("Hello this is function1\n");
    }
}

void function2(){
    while(1){
        sleep(2);
        printf("Hi This is function2\n");
    }


}
int main()
{
function1();
function2();

}