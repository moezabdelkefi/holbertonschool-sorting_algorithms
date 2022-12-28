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
		fprintf(fp, "in the best case\n");
		fprintf(fp, "in the average case\n");
		fprintf(fp, "in the worst case\n");

		fclose(fp);
		return (0);
	}
}
