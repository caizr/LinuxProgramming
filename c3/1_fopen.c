/* 标准io stdio.h */
/* 包括 fopen(),fdopen()
* 
* 
*/
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    //流方式打开文件
    FILE *stm;
    stm=fopen("c3.txt","r");
    fclose(stm);
    //文件描述符可以转换成流
    FILE *stm2;
    int fd2=open("3.txt",O_RDONLY);
    stm2=fdopen(fd2,"r");
    fclose(stm2);
    return 0;
}