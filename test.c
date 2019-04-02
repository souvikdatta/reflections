#include <stdio.h>
int sum(int a, int b);

int main(int argc, char *argv[])
{
	sum(1,2);
	return 0;
}	

int sum ( int a, int b)
{
	return (int) (a+b);
}
