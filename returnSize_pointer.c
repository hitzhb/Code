#include<stdio.h>
void ret(int *returnSize)
{
	*returnSize = 8;
}

int main(int argc, char const *argv[])
{
	int returnSize = 0;
	ret(&returnSize);
	printf("%d\n", returnSize);
	return 0;
}