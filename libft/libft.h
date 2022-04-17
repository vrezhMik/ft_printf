/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:09:13 by vmikayel          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/16 14:44:00 by vmikayel         ###   ########.fr       */
=======
/*   Updated: 2022/04/01 14:48:55 by vmikayel         ###   ########.fr       */
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
<<<<<<< HEAD
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_atoi(const char *str);
int				ft_isalnum(int num);
int				ft_isalpha(int nbr);
int				ft_isascii(int num);
int				ft_isdigit(int num);
int				ft_isprint(int num);
int				ft_tolower(int num);
int				ft_toupper(int num);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_lstsize(t_list *lst);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
size_t			ft_strlen(const char *c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_bzero(void *dest, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			*ft_memccpy(void *dest, const void *src, int c, size_t size);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
char			*ft_strchr(const char *str, int c);
char			*ft_itoa(int nb);
char			**ft_split(char const *s, char c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
t_list			*ft_lstnew(void *content);
=======
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_atoi(const char *str);
int ft_isalnum(int num);
int ft_isalpha(int nbr);
int ft_isascii(int num);
int ft_isdigit(int num);
int ft_isprint(int num);
int ft_tolower(int num);
int ft_toupper(int num);
int ft_strncmp(char *s1, char *s2, size_t n);
int ft_lstsize(t_list *lst);
int ft_memcmp(const void *str1, const void *str2, size_t n);
size_t ft_strlen(const char *c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void *ft_bzero(void *dest, size_t n);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_calloc(size_t count, size_t size);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
void *ft_memccpy(void *dest, const void *src, int c, size_t size);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
char *ft_strchr(const char *str, int c);
char *ft_itoa(int nb);
char **ft_split(char const *s, char c);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strnstr(const char *haystack, const char *needle,
				 size_t len);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
				  void (*del)(void *));
t_list *ft_lstnew(void *content);
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6
#endif
