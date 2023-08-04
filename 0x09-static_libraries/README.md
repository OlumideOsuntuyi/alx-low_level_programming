# Static Library in C Programming

This is a static library written in C programming language. It provides various utility functions to perform common operations on strings and characters. Below is a brief description of each function contained in this library:

### Functions List:

1. **int _putchar(char c);**
   - This function writes a single character 'c' to the standard output.

2. **int _islower(int c);**
   - This function checks if a given character 'c' is a lowercase letter.

3. **int _isalpha(int c);**
   - This function checks if a given character 'c' is an alphabetic character (uppercase or lowercase).

4. **int _abs(int n);**
   - This function returns the absolute value of an integer 'n'.

5. **int _isupper(int c);**
   - This function checks if a given character 'c' is an uppercase letter.

6. **int _isdigit(int c);**
   - This function checks if a given character 'c' is a digit (0-9).

7. **int _strlen(char *s);**
   - This function returns the length of a string 's' (number of characters in the string).

8. **void _puts(char *s);**
   - This function writes a string 's' to the standard output.

9. **char *_strcpy(char *dest, char *src);**
   - This function copies the string 'src' to 'dest'.

10. **int _atoi(char *s);**
    - This function converts a string 's' to an integer.

11. **char *_strcat(char *dest, char *src);**
    - This function concatenates (appends) the string 'src' to the end of 'dest'.

12. **char *_strncat(char *dest, char *src, int n);**
    - This function concatenates (appends) at most 'n' characters from 'src' to the end of 'dest'.

13. **char *_strncpy(char *dest, char *src, int n);**
    - This function copies at most 'n' characters from 'src' to 'dest'.

14. **int _strcmp(char *s1, char *s2);**
    - This function compares two strings 's1' and 's2' and returns an integer indicating their relationship (lexicographically).

15. **char *_memset(char *s, char b, unsigned int n);**
    - This function fills the first 'n' bytes of memory pointed by 's' with the constant byte 'b'.

16. **char *_memcpy(char *dest, char *src, unsigned int n);**
    - This function copies 'n' bytes from memory area 'src' to memory area 'dest'.

17. **char *_strchr(char *s, char c);**
    - This function returns a pointer to the first occurrence of character 'c' in string 's'.

18. **unsigned int _strspn(char *s, char *accept);**
    - This function calculates the length of the initial segment of 's' that consists of only characters from 'accept'.

19. **char *_strpbrk(char *s, char *accept);**
    - This function searches in 's' for any of the characters in 'accept' and returns a pointer to the first match.

20. **char *_strstr(char *haystack, char *needle);**
    - This function finds the first occurrence of the substring 'needle' in the string 'haystack' and returns a pointer to it.

