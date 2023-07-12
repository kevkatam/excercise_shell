#include <stdio.h>
#include <unistd.h>
/**
 * main - PPID
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t mypid;

	mypid = getppid();

	printf("%u\n", mypid);
	return (0);
}
