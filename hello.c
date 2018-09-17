


#include "hello.h"

int str(char* string)
{
	printf("you are :%s\n",string);
	return 0;
}
int main(int argc,char** argv[])
{
	char str_read[1024];
	printf("input your name\n");
	scanf("%s",str_read);
	return str(str_read);
}
