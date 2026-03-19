#include "stdio.h"
#include "unistd.h"

int main()
{
	int i;

	i = 0;

	while (i <= 100)
	{
		write (1, "2", 1);
		i++;
	}
	return (0);
}
