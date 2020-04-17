#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include "ioctl_basic.h"  //ioctl header file

main ( ) {
	
	int fd;
        fd = open("/dev/temp",  O_WRONLY);

        if (fd == -1)
        {
                printf("Error in opening file \n");
		printf(strerror(errno));
                exit(-1);
        }
       
 	ioctl(fd,IOCTL_HELLO);  //ioctl call

        close(fd);
}

