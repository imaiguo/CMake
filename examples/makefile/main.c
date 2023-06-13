#include "stdio.h"

int  p = 10;

void foo(){
    printf("into function foo\n");
}

int main(int argc,char** argv){
    int i = 1;
    int j = 2;
    int l = i + j;
    printf("i+j=%d\n",l);
    foo();
    printf("p=%d\n",p);
    return 0;
}
