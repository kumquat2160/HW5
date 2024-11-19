#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int b[] = { 10,20,30,40 };
	int* bPtr = b;
	int i;
	int offest;

	printf("Array b printed with:\nArray subsvcript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}

	printf("\nPointer/offest notation where\n"
		"the pointer is the array name\n");
	for (offest = 0; offest < 4; offest++)
	{
		printf("*(b+%d)=%d\n", offest, *(b+offest));
	}

	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bPtr[%d]=%d\n", i, bPtr[i]);
	}

	printf("\nPointer/offest notation\n");
	for (offest = 0; offest < 4; offest++)
	{
		printf("*(bPtr+%d)=%d\n", offest, *(bPtr + offest));
	}

	system("pause");
	return 0;
}