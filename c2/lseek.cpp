/* lseek()查找文件 */
/** 定义 *******************************
 * off_t lseek(int fd,off_t pos,int origin)
 * origin 参数：
 *             SEEK_CUR
 *             SEEK_END
 *             SEEK_SET
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
    //从0也就是开头位置写入文件，似乎会覆盖后面的内容！也就是 重写
    if(lseek(fd1,0,SEEK_SET)==-1){
        ;//异常处理
    }
    const char *buf="awe";
    write(fd1,buf,strlen(buf));
    // 如果是pwrite，因为指针位置不变，所以再写一次还是从头开始
    write(fd1,buf,strlen(buf));
    //记得关闭文件
    close(fd1);
    return 0;
}