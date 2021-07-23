#include "static/networkProgramming.h"


int server_init(){
    int listenFd;
    //1. 创建监听套接字
    listenFd = socket(AF_INET , SOCK_STREAM , 0);//利用socket函数创建一个监听套接字,函数返回值为这个套接字的文件描述符
    if(listenFd < 0){perror("server_init->socket");return -1;}//如果创建失败则函数返回-1

    //2. 绑定ip地址和端口号
    struct sockaddr_in ser_addr;//创建一个用来保存服务器ip和端口号的结构体
    memset(&ser_addr , 0 , sizeof(ser_addr));//清空结构体
    //结构体赋值
    ser_addr.sin_family = AF_INET;
    ser_addr.sin_port = htons(8888);
    ser_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    int ret;
    ret = bind(listenFd , (const struct sockaddr*)&ser_addr , sizeof(ser_addr));//利用bind函数完成服务器ip地址和端口号的绑定
    if(ret < 0){ perror("server_init->bind");return -1;}

    //3.开启监听
    ret = listen(listenFd , 16);//利用listen函数开启监听操作
    if(ret < 0){ perror("server_init->listen");return -1;}

    printf("server_init->success\n");
    return listenFd;//返回创建成功的监听套接字的文件描述符
}

int server_wait_connect(int listenFd){
    int connFd; //连接文件描述符,通过accept函数赋值
    struct sockaddr_in con_addr;
    memset(&con_addr , 0 ,sizeof(con_addr));
    socklen_t len = sizeof (con_addr);

    connFd = accept(listenFd , (const struct sockaddr*)&con_addr , &len);
    if(connFd < 0){ perror("server_wait_connect");return -1;}
    printf("connect->success\n");
    return connFd;
}





























