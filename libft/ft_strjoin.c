/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:38 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/30 16:11:11 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, ft_strlen(s1) + 1);
	ft_memmove(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	ptr[len] = '\0';
	return (ptr);
}
