#include<stdio.h>
#include<stdlib.h>
//Declaring an external variable
extern char **environ;

int main()
{
 printf("\n Environment variable passed\n");
 for(int i=0;environ[i]!=NULL;i++)
 {
  printf("environ[%d]:%s\n",i,environ[i]);//Printing all environmental variables
 }
  return 0;
}
