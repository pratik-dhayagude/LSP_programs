#include<stdio.h>   //header file to include they inputoutput
#include<fcntl.h>   //Power full lib created by dennis ritcheie in 1972

int CheakOpen(int ino,int argc,char*Arr)
{
    ino = open(Arr,O_RDONLY);
    if(ino == -1)
    {
        printf("The file is not opend\n");
    }
    else
    {
        printf("File gets sucessfully opend\n");
    }

    return ino;
}
int main(int argc,char *argv[])
{

    int fd  = 0;

    int iRet=0;

    if(argc != 2)
    {
        printf("Error : Invalid arguments\n");
        printf("Please enter the valid arguments : ./myexe filename\n");
        return -1;
    }

    printf("Enter the filename:\n");

    iRet = CheakOpen(fd,argc,argv[1]);

    printf("File gets successfully opend with fd :%d\n",iRet);

    return 0;
}