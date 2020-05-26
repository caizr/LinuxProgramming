#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){----------------------------------------------------------------------------------------------------------------------------------------------
    FILE *stm;
    stm=fopen("c3.txt","r");
    unsigned int c;
    //持续读取到文件末尾
    //   ******注意，fgetc()返回的是unsigned int,转换成int和char是大忌********
    while((c=fgetc(stm))!=EOF){
        printf("%c",c);
    }
    fclose(stm);

    return 0;
}