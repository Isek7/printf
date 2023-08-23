#include "main.h"

/**
 * handleHexLower - Handles lowercase hex
 * @args: Args
 * @pchar: pointer to number of printed characters
 *
 */
void handleHexLower(va_list args, int *pchar)
{
	unsigned int num = va_arg(args, unsigned int);
	*pchar += print_hex(num, 0);
}

/**
 * handleHexUpper - Handles uppercase hex
 * @args: Args
 * @pchar: pointer to number of printed characters
 *
 */
void handleHexUpper(va_list args, int *pchar)
{
	unsigned int num = va_arg(args, unsigned int);
	*pchar += print_hex(num, 1);
}

/**
 *handle_Char - Handles printing of char
 *@c: char
 *@ret: Pointer to number of characters printed
 *
 *Return: Nothing
 */
void handle_Char(char *c, int *ret)
{
	write(1, "%", 1);
	ret += 1;
	write(1, c, 1);
	ret += 1;
}

/**
 *handle_perc - Handles printing of char
 *@ret: Pointer to number of characters printed
 *
 *Return: Nothing
 */
void handle_perc(int *ret)
{
	write(1, "%", 1);
	*ret += 1;
}
