/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:42:46 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/12 11:02:48 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hex_len(unsigned	int x)
{
	int	len;

	len = 0;
	while (x != 0)
	{
		len++;
		x = x / 16;
	}
	return (len);
}

void	put_hex(unsigned int x, char type)
{	
	if (x >= 16)
	{
		put_hex(x / 16, type);
		put_hex(x % 16, type);
	}
	else
	{
		if (x <= 9)
			ft_putchar_fd((x + '0'), 1);
		else
		{
			if (type == 'x')
				ft_putchar_fd((x - 10 + 'a'), 1);
			if (type == 'X')
				ft_putchar_fd((x - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int x, char type)
{
	if (x == 0)
		return (write(1, "0", 1));
	else
		put_hex(x, type);
	return (ft_hex_len(x));
}
