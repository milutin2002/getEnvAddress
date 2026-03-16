#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
    char *ptr;
    if(argc<3){
        printf("Enter enviroment name and the name of program");
        return -1;
    }
    ptr=getenv(argv[1]);
    ptr+=(strlen(argv[0])-strlen(argv[2]))*2;
    printf("%p\n",ptr);
}