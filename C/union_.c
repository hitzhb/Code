#include<stdio.h>

typedef union{
	long long i;
	char ch[sizeof(long long)];
}CHI;

int main(int argc, char const *argv[])
{
	CHI chi;
	chi.i = 1234;
	for(int i = 0; i < sizeof(long long); i++)
	{
		printf("%02hhX\n", chi.ch[i]);
	}
	return 0;
}