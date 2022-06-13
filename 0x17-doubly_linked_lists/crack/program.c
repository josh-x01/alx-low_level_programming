#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 2){
		printf("Invalid Arguments \n");
		return 0;
	}
	int i = 0, sum = 0;
	for(i=0; argv[1][i] != '\0'; i++)
		sum += (int)argv[1][i];

	if (sum == 1381)
		printf("ACCESS GRANTED \n");
	else
		printf("WRONG KEY!\n");
	return 0;
}
