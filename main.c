#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  
  printf("input an integer :");
  scanf("%d", &num);
  
  if (num > 0)
     printf("It is a positive integer./n");
  
  else if (num < 0)
     printf("It is a negative integer.\n");

  else
     printf("It is zero!\n");
   
  system("PAUSE");	
  return 0;
}
