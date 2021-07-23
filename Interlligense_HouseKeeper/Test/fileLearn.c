#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int fileDescriptor;
    fileDescriptor = open("./pointerLearn.c" , O_RDONLY);
    if(fileDescriptor<0){
        perror("openError");
        return -1;
    }
    char buff[1024] = {0};
    int ret = 0;
    ret = read(fileDescriptor , buff , sizeof(buff));
    if(ret < 0){
        perror("readError");
        return -1;
    }
    printf("ret = %d\n",ret);
    printf("buff = :\n%s\n" , buff);

    int fd = open("./forLearning.c" , O_RDWR);
    if(fd<0){
        perror("openError2");
        return -1;
    }
    ret = write(fd , buff , strlen(buff));
    if(ret<0){
        perror("writeError");
        return -1;
    }

}