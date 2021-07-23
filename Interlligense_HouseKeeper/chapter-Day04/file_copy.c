#include "static/file_copy.h"

int file_copy( const char *path1 , const char *path2 ){
    printf("------------copy start--------------");
    int fd1,fd2;
    int ret;

    fd1 = open(path1 , O_RDONLY);
    if(fd1<0){
        perror("openFile1Error");
        return -1;
    }
    fd2 = open(path2 , O_RDWR | O_CREAT , 0664);
    if(fd2 < 0){
        perror("openFile2Error");
        return -1;
    }

    int len = lseek(fd1,0,SEEK_END);
    lseek(fd1,0,SEEK_SET);

    char buf[len];
    ret = read(fd1 , buf , len);
    if(ret<0){
        perror("readFileError");
        return -1;
    }

    ret = write(fd2 , buf , len);
    if(ret<0){
        perror("writeFileError");
        return -1;
    }

    if(fd1>0) close(fd1);
    if(fd2>0) close(fd2);

}