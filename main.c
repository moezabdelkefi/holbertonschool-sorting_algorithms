#include "sort.h"
/**
 * main - cheking big notation
 * Return: (0)
 */
int main(void)
{
	int *fp;

	fp = fopen("0-O", "w");
	if (fp == NULL)
	{
		printf("error\n");
		return (1);
		printf("O(n)\n");
		printf("O(n^2)\n");
		printf("O(n^2)\n");

		fclose(fp);
		return (0);
	}
}
