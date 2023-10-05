#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 1.
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59; // Length of the message

    // Use the write system call to print the message to stderr (file descriptor 2)
    ssize_t bytes_written = write(2, message, len);

    if (bytes_written == -1)
    {
        // Error handling if write fails
        return 1;
    }

    return 0; // Return 0 to indicate successful execution
}
