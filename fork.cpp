#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(){
    pid_t child_pid; //pid_t unsigned int
    cout<<"The main program process ID = "<<getpid()<<endl;

    child_pid = fork();
    if(child_pid != 0){
        cout<<"This is the parent process, with ID = "<<getpid()<<endl;
        cout<<"The child process ID is = "<<child_pid<<endl;
    }else{
         cout<<"This is the child process, with ID = "<<getpid()<<endl;
    }
    return 0;
}