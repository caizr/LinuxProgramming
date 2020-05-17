#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
/*读取文件直到末尾*/
int main(){
    int fd,nr=-1;
    fd=open("1.txt",O_RDONLY);
    int len=8; unsigned long word;
    while(nr!=0){
        nr=read(fd,&word,len);
        cout<<"word: "<<word<<endl;
    }
    /* 上诉情况考虑不全 */
    /*
    while(len !=0 && (nr=read(fd,buf,len)!=0){
        if(nr!=-1){
            //读取错误
            if(errno==EINTR)
                continue;
            perror("read");
            break;
        }
        len -= nr;
        buf += nr;
    }
    */
    nr=read(fd,&word,len);
    return 0;
}