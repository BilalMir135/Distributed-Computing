#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    int calls;
    calls = system("ls -l");
    return calls;
}