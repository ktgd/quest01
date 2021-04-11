/*
**
** QWASAR.IO -- my_abs
**
** @param {int} param_1
**
** @return {int}
**
*/

//#include <stdio.h>

int my_abs(int param_1)
{
  return param_1 < 0 ? -param_1 : param_1; //( ( param_1 )^2 )^( 1 / 2 ); // What? It does not work?
}
/*
int main()
{
  printf("%d\n", my_abs(-3));
  printf("%d\n", my_abs(-2));
  printf("%d\n", my_abs(-1));
  printf("%d\n", my_abs(0));
  printf("%d\n", my_abs(1));
  printf("%d\n", my_abs(2));
  printf("%d\n", my_abs(3));
  return 0;
}*/
