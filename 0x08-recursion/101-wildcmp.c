#include "main.h"

/**
 * str_checker - Checks if two strings are identical.
 * @s1: The base address of string 1.
 * @s2: The base address of string 2.
 * @i: The left index.
 * @j: The special index (joker).
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
    if (s1[i] == '\0' && s2[j] == '\0')
        return 1;

    if (s1[i] == s2[j])
        return str_checker(s1, s2, i + 1, j + 1);

    if (s1[i] == '\0' && s2[j] == '*')
        return str_checker(s1, s2, i, j + 1);

    if (s2[j] == '*')
        return str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1);

    return 0;
}

/**
 * wildcmp - Checks if two strings can be considered identical.
 * @s1: The base address of string 1.
 * @s2: The base address of string 2.
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    return str_checker(s1, s2, 0, 0);
}

