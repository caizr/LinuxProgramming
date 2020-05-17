#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

using namespace std;
int main(){
    int fd;
    fd=open("1.txt",O_RDONLY);
    unsigned long word;
    size_t nr;
    nr=read(fd,&word,sizeof(unsigned long));    //word的值有点看不懂
    cout<<"word: "<<word<<endl;
    cout<<"fd: "<<fd<<"  nr: "<<nr<<endl;
    return 0;
}