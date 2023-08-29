#include <stdio.h>

void first(void)__attribute__((constructor));

/**
  * first - Prints sentence before the main
  * function is executed
  *
  * Description: Prints sentence You're beat! and yet, you must allow,
  * I bore my house upon my back!
  */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
