#include<iostream>
#include<pthread.h>
#include<unistd.h>

using namespace  std;

void *even(void *ptr){
    int i;
    for(i=0; i< 50; i+=2){
        cout<<"Even => "<<i<<endl;
        usleep(100);
    }
    pthread_exit(0);
}

void *odd(void *ptr){
    int i;
    for(i=1; i< 100; i+=2){
        cout<<"Odd => "<<i<<endl;
        usleep(100);
    }
    pthread_exit(0);
}

int main(int agrc, char **argv){
    pthread_t t0,t1;
    pthread_create(&t0,0,even,(void*)50);
    pthread_create(&t1,0,odd,(void*)100);
    pthread_join(t0,0);
    pthread_join(t1,0);
    
    //pthread_detach(t0);


    return 0;
}