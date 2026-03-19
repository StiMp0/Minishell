#include "stdio.h"
#include "unistd.h"

int main()
{
	int i;

	i = 0;

	while (i <= 100)
	{
		write (1, "2", 1);
		write (1, "\n",1);
		printf(hello world\n);
		i++;
	}
	return (0);
}
