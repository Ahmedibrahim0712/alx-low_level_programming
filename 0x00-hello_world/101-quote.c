#include <unistd.h>

/**
 * main - This prints exactly the input on it.
 *
 * Return: Always returns 1.
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	if (write(2, message, len) != len)
	{
		return (1);
	}

	return (1);
}
