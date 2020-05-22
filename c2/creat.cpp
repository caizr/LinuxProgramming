#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string>
using namespace std;
int main(){
    int fd;string buf="hello";
    fd=creat("1.txt",0644);
    write(fd,&buf,6);
    cout<<"fd: "<<fd<<endl;
    close(fd);
    return 0;
}