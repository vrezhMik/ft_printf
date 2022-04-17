/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:24:52 by vmikayel          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/16 14:38:57 by vmikayel         ###   ########.fr       */
=======
/*   Updated: 2022/04/01 13:29:19 by vmikayel         ###   ########.fr       */
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_atoi(const char *str)
{
	int	neg;
	int	i;
	int	num;
=======
int ft_atoi(const char *str)
{
	int neg;
	int i;
	int num;
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6

	i = 0;
	neg = 1;
	num = 0;
<<<<<<< HEAD
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
=======
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
>>>>>>> 408d2e803f33384cb27f2db8ee2b59e39cfca6e6
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
