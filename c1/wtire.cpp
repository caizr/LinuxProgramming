#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main(){
    int fd,nr;
    fd=creat("2.txt",0644);
    char []s="hello";
    nr=write(fd,s,8);
    cout<<"nr: "<<nr<<endl;
    return 0;
}