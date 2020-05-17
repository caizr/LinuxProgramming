/* write()函数写文件 */
#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main(){
    int fd,nr;
    fd=creat("2.txt",0644);
    // char s[] = "hello";
    const char *s="hello";
    //nr=write(fd,s,9); 这样做出了一个问题，nr是9，也就是说
    //虽然s只有5个字节，但是还是写进了9个字节，后面出现了乱码
    nr=write(fd,s,strlen(s));
    cout<<"nr: "<<nr<<endl;
    /* 上面的代码写的考虑不全 */
    /* 自己写的 */
    int fd2,ret=2,len=8;
    const char * s2="assignment hello world c++ 123456 this is txt";
    int s2_len=strlen(s2);
    fd2=creat("3.txt",0644);
    while(fd2!=-1 && s2_len>=0){
        ret=write(fd2,s2,len);
        s2_len -=ret;
        cout<<"ret: "<<ret<<endl;
        if(ret == -1){
            ;//进行异常处理...... 
        } 
    }
    /* 以上程序写入文件的时候，一直是assignment，不会写入后续的hello... */
    return 0;
}