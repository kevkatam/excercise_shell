#include <stdio.h>
/**
 * main - program that prints all the arguments, without using ac.
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i;

	while (av[i])
	{
		printf("%s",av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
