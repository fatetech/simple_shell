#include "shell.h"

/**
 * _myexit - this exits the shell
 * @info: is the Structure containing potential arguments. Used to maintain
 *          a constant function prototype.
 *  Return: exits with a given exit status
 *         (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
	int j;

	if (info->argv[1])
	{
		j = _erratoi(info->argv[1]);
		if (j == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
}
/**
 * _myhelp - this changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
	int _myhelp(info_t *info)
	{
		char **arg_array;

		arg_array = info->argv;
		_puts("help call works. Function not yet implemented \n");
		if (0)
			_puts(*arg_array); /* temp att_unused workaround */
		return (0);
	}
