/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:26:59 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/01 13:27:08 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = (const char *) s1;
	while (*s++ != '\0')
		i++;
	d = malloc(i + 1);
	if (d == NULL)
		return (d);
	s = (char *) s1;
	i = 0;
	while (*s != '\0')
	{
		d[i] = *s++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
