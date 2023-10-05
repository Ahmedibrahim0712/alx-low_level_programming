#include <unistd.h>

/**
 * main - Prints the specified message to stderr.
 *
 * Return: Always returns 1.
 */
int main(void)
{
    /* The message to print */
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    /* Length of the message */
    ssize_t len = 59;

    /*
     * Use the write system call to print the message to stderr
     * (file descriptor 2).
     */
    if (write(2, message, len) != len)
    {
        /* Error handling if write fails */
        return (1);
    }

    return (1);
}
