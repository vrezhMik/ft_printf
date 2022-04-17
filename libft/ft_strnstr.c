/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:15:07 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/30 16:18:18 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	int		l;

	if (*needle == '\0')
		return ((char *) haystack);
	h = (char *) haystack;
	n = (char *) needle;
	i = 0;
	l = ft_strlen(n);
	while (h[i] != '\0' && (i + l) <= len)
	{
		if (ft_strncmp((h + i), n, l) == 0)
		{
			return (h + i);
		}
		i++;
	}
	return (NULL);
}
