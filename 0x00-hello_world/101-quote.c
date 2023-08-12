#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t message_length = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
write(STDERR_FILENO, message, message_length);
return (1);
}
