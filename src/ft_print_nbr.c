/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:46:45 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/15 15:24:09 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	nbr_len(int x)
{
	int	len;

	if (x == 0)
		return (1);
	len = 0;
	if (x < 0)
		len++;
	while (x)
	{
		len++;
		x = (x - (x % 10)) / 10;
	}
	return (len);
}

int	ft_putnbr(int x)
{
	ft_putnbr_fd(x, 1);
	return (nbr_len(x));
}
