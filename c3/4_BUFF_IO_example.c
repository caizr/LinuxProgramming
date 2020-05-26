/* 缓冲IO 实例
* 写入一个结构体变量（以二进制数据形式）到文件中
* 再从文件中读取该数据并打印出来
*/

#include<stdio.h>

struct Book{
    char name[100];
    unsigned int number;
    double price;
};
int main(){
    //write
    struct Book B1={"Linux Book!",50,3.14};
    FILE *W=fopen("4_file","w");
    fwrite(&B1,sizeof(struct Book),1,W);
    fclose(W);
    //read
    struct Book B2;
    FILE *R=fopen("4_file","r");
    fread(&B2,sizeof(B1),1,R);
    fclose(R);

    //print
    printf("Name=%s, Number=%d,Price=%f",B2.name,B2.number,B2.price);
    return 0;
}