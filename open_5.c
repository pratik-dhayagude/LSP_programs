/////////////////////////////////////////
//
//  Headder File Implimentation
//
/////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

////////////////////////////////////////
//  Author : Pratik Dhananjay Dhayagude
//  Date :
//  Fuction : Create to the new Fule 
//            using open system call
//  
//
////////////////////////////////////////

int CreatFile(int iNo , char * Arr)
{
    iNo = open(Arr,O_CREAT|O_TRUNC,0777); 
    if(iNo < 0)
    {
        printf("File is not created\n");
    }
    else
    {
        printf("File gets sucessfullt created\n");
    }
    return iNo;
}

////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////

int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[20]={'\0'};
    printf("Enter the File name:\n");
    scanf("%s",Buffer);
    iRet = CreatFile(fd , Buffer);

    printf("File gets sucessfully created with fd %d\n",iRet);
    close(iRet);

    return 0;
}

/*
    The trunc flag is used to when the file is already exiting and if it is in reading and writing mode 
    the the trunc flag can be truncate the data and the length will be zero
*/