#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest < 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("size = %c", size);

	return 0;
}