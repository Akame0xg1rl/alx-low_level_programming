#include <unistd.h>

/**
 * Prints the message "_putchar" without using standard library.
 * Return: 0
 */
int main(void)
{
char message[] = "_putchar\n";
write(1, message, sizeof(message) - 1);
return (0);
}
