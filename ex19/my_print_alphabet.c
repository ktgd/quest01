/*
**
** QWASAR.IO -- my_print_alphabet
**
**
** @return {void}
**
*/

#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_alphabet()
{
  int i = 97;

  while ( i <= 122 ) {
    my_putchar(i);
    i++;
  }
  if ( i == 123 )
  {
    my_putchar('\n');
  }
}
/*
int main()
{
  my_print_alphabet();
}*/
