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

int	ft_putchr(int c)
{
	write(1, &c, 1);
	return (1);
}

int	nbrLen(x)
{
	int	len;

	if (x == 0)
		return (1);
    len = 0;
	if (x < 0 )
		len++;
    while(x)
    {
        len++;
        x = (x-(x%10))/10;
    }
	return (len);
}

int	ft_putnbr(int x)
{
	ft_putnbr_fd(x,1);
	return (nbrLen(x));
}

int	ft_printStr(char *line)
{
	if(!line)
	{
		ft_putstr_fd("(null)",1);
		return (6);
	}
	ft_putstr_fd(line,1);
	return (ft_strlen(line));
}

void	putHex(unsigned int x, char type)
{	

	if (x >= 16)
	{
		putHex(x / 16, type);
		putHex(x % 16, type);
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

int ft_printHex(unsigned int x, char type)
{
if (x == 0)
		return (write(1, "0", 1));
	else
		putHex(x, type);
	return (ft_hex_len(x));
}

int ft_printU(unsigned int x)
{
	(void)x;
	return (0);
}

int	getContent(char type, va_list ap)
{
	int	len;

	len = 0;
	if(type == 'c')
       len += ft_putchr(va_arg(ap,int));
    else if(type == 'd' || type == 'i')
        len += ft_putnbr(va_arg(ap,int));
    else if (type == '%')
        len += ft_putchr('%');
	else if (type == 's')
		len += ft_printStr(va_arg(ap,char *));
	else if (type == 'x' || type == 'X')
		len += ft_printHex(va_arg(ap, unsigned int),type);
	else if (type == 'u')
		len += ft_printU(va_arg(ap, unsigned int));
    return (len);
}

int	getType(const char *line, int i)
{
	while (line[i] != 's' && line[i] != 'c' && line[i] != 'd' && line[i] != 'i' 
		&& line[i] != 'x' && line[i] != 'X' && line[i] != 'p' && line[i] != 'u'
		&& line[i] != '%')
		i++;
	return (i);
}

combination	getCombination(const char *line, int i, va_list ap)
{
	combination comb;
	comb.type = line[getType(line,i)];
	comb.height = 0;
	comb.flags = 0;
	comb.width = 0;
	comb.content_len = getContent(comb.type, ap);
	comb.next_index = getType(line,i)+1;
	return (comb);
}


int ft_printf(const char *line,...)
{
	va_list		ap;
	combination	comb;
	int		len;
	int		i;

	va_start(ap, line);

	i = 0;
	len = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '%')

		{
			comb = getCombination(line,i+1,ap);
			i = comb.next_index;
			len += comb.content_len;
		}
		else
		{
			ft_putchar_fd(line[i],1);
			len++;
			i++;
		}

	}
		
	va_end(ap);

	return (len);
}
