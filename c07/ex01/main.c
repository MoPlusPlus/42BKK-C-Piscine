#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int *a;
	int *b;
	int *c;

	a = ft_range(5,5);
	b = ft_range(5,9);
	c = ft_range(3,-1);
	printf("Expect.0x0 5 6 7 8 C\n");
	printf("Result.%p %d %d %d %d %p \n",a,b[0],b[1],b[2],b[3],c);
}

