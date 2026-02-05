#include <stdio.h>

void myfunction(int* ptr)
{
	*ptr = 0x05;
	printf("This Value is %d!!!\n", *ptr);
}

int main()
{
	printf("This is the MAIN function!!!\n");

	int temp = 10;
	int* myPtr = &temp;

	myfunction(myPtr);

	printf("Wait! This value is %d\n", *myPtr);
}

