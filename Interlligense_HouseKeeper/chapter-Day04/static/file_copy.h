
#ifndef INTELLIGENSE_HOUSEKEEPER_FILE_COPY_H
#define INTELLIGENSE_HOUSEKEEPER_FILE_COPY_H
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int file_copy( const char *path1 , const char *path2 );

#endif//INTELLIGENSE_HOUSEKEEPER_FILE_COPY_H
