#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * @array: argument
 * @size: argument
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j = 0;

	for (i = 0; i < size - i - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				printf("\n");
			}
		}
	}
}
