#include <unistd.h>

/**
 * main - entry of the program
 *
 * Return:  0 for success
 */
int main(void)
{
	char *message = "Betty would be proud!\n"; /* value of the pointer */

	write(STDOUT_FILENO, message, 13);
	return (0);
}

