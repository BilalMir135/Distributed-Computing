#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int spwan(char* program ,char** agrList){
    pid_t childPid;
    childPid = fork();
    if(childPid !=0){
        cout<<"This is parent process"<<endl;
        return childPid;
    }else{
        execvp(program,agrList);
        
    }
}

int main(){
    char* argList[] = {"ls","-l","/",NULL};
    spwan("ls",argList);
    cout<<"Done with main program"<<endl;
    return 0;
}