/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:11:49 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/18 11:13:05 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*x;
	size_t	i;

	x = str;
	i = 0;
	while (i != n)
	{
		x[i] = c;
		i++;
	}
	return (x = str);
}
