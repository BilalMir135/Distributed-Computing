#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    //process id
    cout<<"Process ID = "<<getpid()<<endl;

    //parent process id
    cout<<"Parent process ID = "<<getppid()<<endl;
    
    return 0;
}