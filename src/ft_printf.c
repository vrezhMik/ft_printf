/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:50:19 by vmikayel          #+#    #+#             */
/*   Updated: 2022/05/16 23:19:34 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	get_content(char type, va_list ap)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_putchr(va_arg(ap, int));
	else if (type == 'd' || type == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (type == '%')
		len += ft_putchr('%');
	else if (type == 's')
		len += ft_print_str(va_arg(ap, char *));
	else if (type == 'x' || type == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), type);
	else if (type == 'u')
		len += ft_print_u(va_arg(ap, unsigned int));
	else if (type == 'p')
		len += ft_print_ptr(va_arg(ap, unsigned long long));
	return (len);
}

int	get_type(const char *line, int i)
{
	while (line[i] != 's' && line[i] != 'c' && line[i] != 'd' && line[i] != 'i'
		&& line[i] != 'x' && line[i] != 'X' && line[i] != 'p' && line[i] != 'u'
		&& line[i] != '%')
		i++;
	return (i);
}

t_combination	get_combination(const char *line, int i, va_list ap)
{
	t_combination	comb;

	comb.type = line[get_type(line, i)];
	comb.height = 0;
	comb.flags = 0;
	comb.width = 0;
	comb.content_len = get_content(comb.type, ap);
	comb.next_index = get_type(line, i) + 1;
	return (comb);
}

int	ft_printf(const char *line, ...)
{
	va_list			ap;
	t_combination	comb;
	int				len;
	int				i;

	va_start(ap, line);
	i = 0;
	len = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '%')
		{
			comb = get_combination(line, i + 1, ap);
			i = comb.next_index;
			len += comb.content_len;
		}
		else
		{
			ft_putchar_fd(line[i], 1);
			len++;
			i++;
		}
	}
	va_end(ap);
	return (len);
}
