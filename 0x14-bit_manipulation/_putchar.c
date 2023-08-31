#include "main.h"
#include <unistd.h>
/**
  * _putchar - Writes char c to stdout
  * @c: Character to Print
  *
  * Description: Putchar 
  *
  * Return: on success 1.
  * on Error, -1 returned, and errno is set appropriate.
  */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
