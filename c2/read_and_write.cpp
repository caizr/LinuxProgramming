/* 读取1.txt中的内容，并写入到11.txt中 */
#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

using namespace std;
int main(){
    //fd1:读文件描述符 fd2:写文件描述符
    //ret: 每次读操作返回的字节数
    int fd1,fd2,ret;
    //word: buf缓存
    unsigned long word;
    //len: 每次读取的字节数
    size_t len=8;
    fd1=open("1.txt",O_RDONLY);
    fd2=creat("11.txt",0644);
    while(fd1!= -1 && (ret=read(fd1,&word,len))!=0){
        if(ret==-1){
            ;//异常处理
        }
        //读取操作
        if(write(fd2,&word,ret)==-1){
            ;//写操作异常处理
        }
    }
    
    /*注意，每次用完fd之后需要关闭文件 */
    if(close(fd1)==-1){
        perror("error");
    }
    if(close(fd2==-1){
        perror("error");
    }
    //close不意味着数据写入到磁盘，如果需要写入，需要用SYNC
    return 0;
}