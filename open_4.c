#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int CreatFile(int fd,char * Arr)
{
    fd = open(Arr,O_CREAT|O_TRUNC,0777);
    if(fd <0)
    {
        printf("File is not created\n");
    }
    else
    {
        printf("file is created\n");
    }
    return fd;
}

int main()
{
    char Buffer[20];
    int iNo = 0;
    int iRet = 0;

    printf("Enter the file name:\n");
    scanf("%s",Buffer);

    iRet = CreatFile(iNo,Buffer);

    printf("File gets successfully created with fd :%d\n",iRet);

    return 0;
}