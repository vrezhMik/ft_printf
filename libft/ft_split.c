/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:27:18 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/31 14:43:49 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*x;
	char	*ptr;

	x = (char *)s;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(i + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, x, i + 1);
	return (ptr);
}

char	**body(int i, int strs_len, char const *s, char c)
{
	char	**ptr;

	ptr = (char **)malloc(sizeof(char *) * (strs_len + 1));
	if (!ptr)
		return (NULL);
	while (++i < strs_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = init_str(s, c);
		if (!ptr)
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strs_len;

	i = -1;
	if (!s)
		return (NULL);
	strs_len = count_words(s, c);
	return (body(i, strs_len, s, c));
}
