/*
**
** QWASAR.IO -- my_isspace
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isspace(char param_1)
{
  	return (param_1 == '\t' || param_1 == '\n' || param_1 == '\v' || param_1 == '\f' || param_1 == '\r' || param_1 == ' ');
}
