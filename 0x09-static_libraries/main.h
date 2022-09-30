main.h

Who has access



System properties

Type

C

Size

879 bytes

Storage used

879 bytes

Location

0x09-static_libraries

Owner

David Alagwu

Modified

Sep 29, 2022 by David Alagwu

Opened

9:45 PM by me

Created

7:36 AM

No description

Viewers can download

#ifndef MAIN_H

#define MAIN_H



/*
 *
 *  *  * File: main.h
 *
 *   *   * Auth: Alagwu David
 *
 *    *    * Desc: Header file containing the prototypes of all functions
 *
 *     *     *       included in the static library libholberton.a.
 *
 *      *      */

int _putchar(char c);

int _islower(int c);

int _isalpha(int c);

int _abs(int n);

int _isupper(int c);

int _isdigit(int c);

int _strlen(char *s);

void _puts(char *s);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);



#endif
