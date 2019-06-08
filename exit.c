#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int num=0;
int main()
{
  printf("-----------------");
  int pid=fork();
  if(pid>0){
    printf(" i am parent\n");
    sleep(1);
    //退出进程
 // _exit(1);
  //return 1;
   }else if(pid==0){
    printf("i am child\n");
    //_exit(0);
    return 0;
   }
wait(NULL);
printf("hehe");
 // printf("want to get num 1\n");
 // if(num){
 //   printf("success!");  
 // }
 // else 
 //   printf("get num 0");
// printf("want to get num\0");
  return 0;
}

