#ifndef MAIN_H
#define MAIN_H

/* _putchar prototype for output */
int _putchar(char c);

/* --- Pointers, Arrays, Strings Project --- */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

/* --- Recursion Project --- */
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_finder(int n, int guess); /* Helper for _sqrt_recursion */
int is_prime_number(int n);
int is_divisible(int n, int divisor); /* Helper for is_prime_number */

/* --- argc, argv Project (helper function) --- */
int _is_digit(char *s);

/* --- malloc, free Project --- */
char *create_array(unsigned int size, char c);

#endif /* MAIN_H */
