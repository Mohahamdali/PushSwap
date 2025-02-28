#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
#include <stdio.h>
# include <stdlib.h>
# include "../includes/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char* get_next_line(int fd);
size_t ft_strlen(const char *s);
char* ft_strdup(const char *s1);
char* ft_strchr(const char *s, int c);
char* ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char* ft_substr(char const *s, unsigned int start, size_t len);

#endif