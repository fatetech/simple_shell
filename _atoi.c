#include "shell.h"
/**
 * interactive - returns a true if the shell is in a interactive mode
 * @info: struct address
 *
 * Return: 1 if shell is in interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * is_delim - checks if a character is a delimeter
 * @c: the char is to check
 * @delim: is the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
 * _isalpha - isAlpha checks for alphabetic character
 * @c: is the character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 *_atoi - the atoit converts a string to an integer
 *@s: is the string to be converted
 *Return: 0 if there is no numbers in string, a converted number otherwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
