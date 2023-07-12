#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints "$ ", wait for the user
 *  to enter a command, prints it on the next line.
 *  Return: Always 0
 */
int main(void)
{
	char *buf = malloc(1024);
	ssize_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buf, &len, stdin);
		printf("%s", buf);
	}
	return (0);
}

