#include<stdio.h>
int ret(int returnSize)
{
	returnSize = 8;
	return returnSize;
}

int main(int argc, char const *argv[])
{
	int returnSize = 3;
	int r = ret(returnSize);
	printf("%d\n", returnSize);
	return 0;
}