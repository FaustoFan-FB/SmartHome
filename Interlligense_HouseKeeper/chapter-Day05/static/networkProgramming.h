#ifndef INTELLIGENSE_HOUSEKEEPER_NETWORKPROGRAMMING_H
#define INTELLIGENSE_HOUSEKEEPER_NETWORKPROGRAMMING_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <memory.h>
#include <stdio.h>

//server
int server_init();
int server_wait_connect(int listenFd);




#endif//INTELLIGENSE_HOUSEKEEPER_NETWORKPROGRAMMING_H
