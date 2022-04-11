/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:49:20 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/18 11:52:46 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *) str;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*s == ch)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (NULL);
}
