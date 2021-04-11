/*
**
** QWASAR.IO -- my_print_reverse_alphabet
**
**
** @return {void}
**
*/

#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_reverse_alphabet()
{
  int i = 122;

  while ( i >= 97 ) {
    my_putchar(i);
    i--;
  }
  if ( i == 96 )
  {
    my_putchar('\n');
  }
}
/*
int main()
{
  my_print_reverse_alphabet();
}*/
