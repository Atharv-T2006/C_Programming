#include<stdio.h>
#include<fcntl.h>  // file control
int main()
{
    int fd = 0;
    fd=creat("Marvelous.txt",0777);

    if (fd==-1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File gets created with fd : %d\n ",fd);

    }


    return 0;
}