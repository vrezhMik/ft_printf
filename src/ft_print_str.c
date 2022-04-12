/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:45:41 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/12 10:46:40 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_str(char *line)
{
	if (!line)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(line, 1);
	return (ft_strlen(line));
}
