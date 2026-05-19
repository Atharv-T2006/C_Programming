#include<stdio.h>
#include<fcntl.h>  // file control

int main()
{

    int fd = 0;
    int ret = 0;
    char arr[]="Marvellous Infosystems";
    fd = open("Marvelous.txt",O_RDWR);

    if (fd==-1)
    {
        printf("Unable to open file");
    }
    else{
        printf("File gets opened with fd : %d \n",fd);

        ret = write(fd,arr,10);  // 10 characters print means only Marvellous

        printf("%d bytes gets written ino the file\n",ret);
    }

    close(fd);

    return 0;
}