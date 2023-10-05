#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input_num;
	int sum = 0;
	int i;

	printf("input a number: ");
	scanf("%d", &input_num);
	
	for(i=0; i<=input_num; i++)
	{
		sum = sum + i;
	}

	printf("The result is %i\n", sum);
   
    system("PAUSE");	
    return 0;
}
