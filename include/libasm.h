#pragma once
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

size_t	ft_strlen(const char *str);
char	*ft_strcpy( char * destination, const char * source );
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int  fd,  const  void  *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);
int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
