#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(){
    pid_t child_pid; 
    cout<<"The main program process ID = "<<getpid()<<endl;

    child_pid = fork();
    if(child_pid != 0){
        cout<<"This is the parent process, with ID = "<<getpid()<<endl;
        sleep(60);
    }else{
         exit(0);
    }
    return 0;
}