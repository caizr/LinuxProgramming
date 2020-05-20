学习linux系统编程的笔记
c2:文件操作，读写，open函数的使用，read()和write()函数的使用,close()关闭文件
   lseek()定位文件指针位置，pread()和pwriet()，ftruncate()/truncate()截短文件
    其中可能碰到的异常返回值，这部分没有仔细看
c2 NOTICE:
    /* pread() pwrite()与 先lseek()后read()/write() 的区别 */
    最重要的一点，pread()/pwrite()不会更新文件指针位置，而后者会