/*
**
** QWASAR.IO -- my_isalpha
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isalpha(char param_1)
{
  return ((('A' <= param_1 && param_1 <= 'Z') || ('a' <= param_1 && param_1 <= 'z')) ? 1 : 0);
}
