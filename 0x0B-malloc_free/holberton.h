#ifndef HOLBERTON_H
#define HOLBERTON_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
void _str_concat(char *s1, char *s2);
char **strtow(char *str);
char *extractWord(char *s, int start);
#endif
