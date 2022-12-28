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
		fprintf(fp, "O(n)\n");
		fprintf(fp, "O(n^2)\n");
		fprintf(fp, "O(n ^ 2)\n");

		fclose(fp);
		return (0);
	}
}
