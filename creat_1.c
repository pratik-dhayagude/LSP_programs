#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int Creat(int iNo,char * Arr)
{
    iNo = creat(Arr,0777);  // System call to create the file 

    if(iNo < 0)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    printf("File gets successfully created\n");
    return iNo;
}

int main()
{
    char Buffer[20];
    int fd = 0;
    int iRet = 0;
    printf("Enter the file name:");
    scanf("%s",Buffer);

    iRet = Creat(fd,Buffer);
    printf("File gets sucessfully created with fd:%d\n",iRet);
    close(iRet);

    return 0;
}