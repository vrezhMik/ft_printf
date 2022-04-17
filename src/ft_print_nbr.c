/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:46:45 by vmikayel          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/15 15:24:09 by vmikayel         ###   ########.fr       */
=======
/*   Updated: 2022/04/12 10:49:30 by vmikayel         ###   ########.fr       */
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6
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
