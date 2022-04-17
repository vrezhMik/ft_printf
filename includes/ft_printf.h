/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:56:59 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/12 10:59:37 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

typedef struct combination
{
	char	type;
	char	flags;
	int		width;
	int		height;
	int		next_index;
	int		content_len;
}	t_combination;

int	ft_printf(const char *line, ...);
int	ft_print_hex(unsigned int x, char type);
int	ft_print_u(unsigned int x);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_str(char *line);
int	ft_putchr(int c);
int	ft_putnbr(int x);

#endif
