#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
	printf("This literal is displayed on standard output\n");
}

void hello2(void)
{
	print("another function");
}
int main(void)
{
	hello1();

	return EXIT_SUCCESS;
}
