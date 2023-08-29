#include "main.h"

int check_pal(char *r, int i, int len);
int _strlen_recursion(char *r);

/**
  * is_palindrome - CHECKS if String is PALINDROME
  * @r: string to Reverse
  *
  * Return: 1 if it is, 0 it's not
  */
int is_palindrome(char *r)
{
	if (*r == 0)
		return (1);
	return (check_pal(r, 0, _strlen_recursion(r)));
}

/**
  * _strlen_recursion - RETURNS the length of a string
  * @r: String to Calcul the length of
  *
  * Return: Length of string
  */
int _strlen_recursion(char *r)
{
	if (*r == '\0')
		return (0);
	return (1 + _strlen_recursion(r + 1));
}

/**
  * check_pal - CHECKS characters recursively for palindrome
  * @r: string to CHECK
  * @i: iterator
  * @len: length of string
  *
  * Return: 1 if palindrome, 0 if not
  */
int check_pal(char *r, int i, int len)
{
	if (*(r + i) != *(r + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(r, i + 1, len - 1));
}
