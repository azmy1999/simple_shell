#include "shell.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to check the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    if (s == NULL)
        return (0);

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return (len);
}

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Negative if s1 < s2, positive if s1 > s2, zero if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            return (*s1 - *s2);

        s1++;
        s2++;
    }

    if (*s1 == *s2)
        return (0);
    else
        return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if a string starts with a given substring.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the next character in haystack after the needle, or NULL if needle is not found.
 */
char *starts_with(const char *haystack, const char *needle)
{
    while (*needle != '\0')
    {
        if (*needle != *haystack)
            return (NULL);

        needle++;
        haystack++;
    }

    return ((char *)haystack);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination buffer.
 * @src: The source buffer.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcat(char *dest, char *src)
{
    char *ret = dest;

    while (*dest != '\0')
        dest++;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return (ret);
}
