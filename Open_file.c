#include<stdio.h>
#include<fcntl.h>  // file control

int main()
{

    int fd = 0;
    fd = open("Marvelous.txt",O_RDWR);

    if (fd==-1)
    {
        printf("Unable to open file");
    }
    else{
        printf("File gets opened with fd : %d \n",fd);
    }

    return 0;
}