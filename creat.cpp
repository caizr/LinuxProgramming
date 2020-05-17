#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
using namespace std;
int main(){
    int fd;
    fd=creat("1.txt",0777);
    /* 
    cout<<"fd: "<<fd<<endl;
    return 0;
}