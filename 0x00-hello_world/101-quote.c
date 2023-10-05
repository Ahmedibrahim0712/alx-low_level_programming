#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59;

    // Use the write system call to print the message to stderr (file descriptor 2)
    if (write(2, message, len) != len)
    {
        // Error handling if write fails
        return 1;
    }

    return 1;
}
