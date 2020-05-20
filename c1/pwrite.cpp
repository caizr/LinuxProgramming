/* pwrite()查找文件 */
/** 定义 *******************************
 * ssize_t pwrite(int fd,void *buf,size_t count,off_t pos)
 * ************************************/

#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(){
    int fd1;
    fd1=open("1.txt",O_RDWR);
    if(fd1==-1){
        return -1;
        ;//错误异常处理
    }
    const char *buf="awe";
    pwrite(fd1,buf,strlen(buf),0);
    //记得关闭文件
    close(fd1);
    return 0;
}