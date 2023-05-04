#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int q, r, temp;

	for (q = 0; r < n - 1; i++)
	{
		for (r = q + 1; r > 0; r--)
		{
			temp = *(a + r);
			*(a + r) = *(a + (r - 1));
			*(a + (r - 1)) = temp;
		}
	}
}
