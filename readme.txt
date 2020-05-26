学习linux系统编程的笔记
<<<<<<< HEAD
c2:文件操作，读写，open函数的使用，read()和write()函数的使用,sync()函数的使用，O|SYNC，close()
    其中可能碰到的异常返回值，这部分没有仔细看
    粗略的看：fsync(),fdatasync(),
=======
c2:文件操作，读写，open函数的使用，read()和write()函数的使用,close()关闭文件
   lseek()定位文件指针位置，pread()和pwriet()，ftruncate()/truncate()截短文件
    其中可能碰到的异常返回值，这部分没有仔细看,2.10 IO多路复用没看, 
c2 NOTICE:
    /* pread() pwrite()与 先lseek()后read()/write() 的区别 */
    最重要的一点，pread()/pwrite()不会更新文件指针位置，而后者会

c3: 缓冲快，尽量通过缓冲块的方式读写数据，减少系统调用; 标准I/O(stdio.h)
    fopen(),fdopen(),fclose(),fcloseall()[linux特有];
c3: NOTICE
    /* fgetc()返回的是unsigned int，切忌使用char或者int读取fgetc的返回值 */
>>>>>>> c03259ed7f8fd84e0b0a8b9c453cbc0563502c17
