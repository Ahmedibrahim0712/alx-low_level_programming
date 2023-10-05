#include <unistd.h>

/**
 * main - This prints exactly the input on it.
 *
 * description: using write function to print a quote
 * 		write(int fd,const void *buf,size_t count)
 * 
 * Return: 1 (not success)
 */
int main(void)
{
	char quo [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	if (write(1, quo, len, 59);

		return (1);
	
}
