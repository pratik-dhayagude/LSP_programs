#include<fcntl.h>
#include<stdio.h>

int CreatFile(int iNo,int argc,char * Arr)
{
    iNo = creat(Arr,0777); //creating the file in Arr[1] means the create the file                     
    if(iNo == -1)          // if file is not created
    {
        printf("File is not created\n");
    }
    else
    {
        printf("File gets sucessfully created\n");
    }
    return iNo;
}
int main(int argc , char * argv[]) //command line arguments
{   
    int fd = 0;
    int iRet = 0;

    if(argc != 2)           //error: if the command linr arguments invalid
    {
        printf("Error : Invalid arguments\n");
        printf("Please enter the valid argument:/myexe Filename\n");
        return -1;
    }

    iRet = CreatFile(fd,argc,argv[1]);

    printf("File is sucessfully created with fd:%d\n",iRet);

    return 0;

}