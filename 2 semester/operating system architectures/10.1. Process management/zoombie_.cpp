#include<iostream>
#include<unistd.h>

using namespace std;

int main(){

pid_t child_pid;


child_pid = fork();

    if( child_pid >0 ){

        cout << child_pid << endl;
        sleep(120);

    }

    else 
    {
        cout << child_pid << endl;
        exit(0);
    }
    
    return 0;
}