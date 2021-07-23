#include "static/networkProgramming.h"

int main(){
    int listenFd = server_init();
    int connFd = server_wait_connect(listenFd);
    char buff1[10];
    char buff2[1024*1024];

    while(1){
        read(connFd , buff1 , sizeof(buff1));
        printf("buf = %s\n",buff1);
        if(strcmp(buff1,"file") == 0){
            printf("---------Transport--------\n");
            int fd = open("./server_init.c" , O_RDONLY);
            int size = lseek(fd , 0 , SEEK_END);
            lseek(fd , 0 , SEEK_SET);
            read(fd , buff2 , size);
            write(connfd , buff2 , size);
        }
    }

    return 0;
}