#include<stdio.h>
#include<fcntl.h>

int OpenFile(int iNo , char *Arr) // this function is used for the open the file
{
    iNo = open(Arr,O_RDWR);        //System call to open they file

    if(iNo < 0)                     // if file is already exited the the return value will be fd other wise it returns -1
    {
        printf("Unable to open they file\n");

    }
    else
    {
        printf("File gets sucessfully opened\n");
    }
    return iNo;                 //returning the file decriptor
}

int main()
{
    char Buffer[20]={'\0'};     //Enter they file name
    int fd = 0;
    printf("Enter the file name:\n");
    scanf("%s",Buffer);
    int iRet = OpenFile(fd,Buffer);
    printf("File gets succesfully opened with fd :%d\n",iRet);
    return 0;
}