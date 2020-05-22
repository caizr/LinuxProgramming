/* ftruncate()/truncate截断文件 */
/** 定义 *******************************
 * #include<sys/types.h>
 * #include<unistd.h>
 * 
 * int ftruncate(int fd,off_t len)
 * int truncate(char *path,off_t leni)
 * 
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
    //截断原来文件
    if(ftruncate(fd1,5)==-1){
        ;//异常处理
    }
    //记得关闭文件
    close(fd1);
    return 0;
}