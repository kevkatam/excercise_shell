#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prototype
 *
 * Return: Always 0
 */
int main(void)
{
	char *buf;
	size_t len;
	char *token;

	buf = malloc(1024);
	len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buf, &len, stdin);
		printf("buffer getline: %s", buf);

		token = strtok(buf, " ");
		while (token)
		{
			printf("buffer strtok: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}

