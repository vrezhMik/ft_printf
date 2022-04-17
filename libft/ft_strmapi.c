/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:26:00 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/01 13:26:16 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*sm;

	if (!s)
		return (0);
	l = (unsigned int)ft_strlen(s);
	sm = (char *)malloc(sizeof(char) * (l + 1));
	if (!sm)
		return (NULL);
	i = 0;
	while (i < l)
	{
		sm[i] = f(i, s[i]);
		i++;
	}
	sm[i] = '\0';
	return (sm);
}
