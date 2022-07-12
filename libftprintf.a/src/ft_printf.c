/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:09:04 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 19:02:01 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_ischar(int ch, int *we)
{
	ft_write (1, (char *)&ch, 1, we);
	return (1);
}

//ft_printf("hola que tal como estas usted %s", NULL);
//hola que tal como estas uted (null);

int	ft_isstring(char * s)
{
	int	len;

	len = 0;
	if(!s){
		len = write(1, "(null)", 6);
		return(len);
	}
	ft_putstr(s);
	len = ft_strlen(s);
	return (len);
	
}

int	ft_isint(int i)
{
	char*	s;
	int	len;

	len = 0;
	s = ft_itoa(i);
	ft_putstr(s);
	len = ft_strlen(s);
	free(s);
	return (len);
}

int	ft_isunsigned(unsigned int ch)
{
	char*	s;
	int	len;

	len = 0;
	s = ft_uitoa(ch);
	ft_putstr(s);
	len = ft_strlen(s);
	free(s);
	return (len);
}

int	ft_type(va_list args, char ch, int *we)
{
	int len;
	
	len = 0;
	if (ch == 'c')
		len = ft_ischar(va_arg(args, int), we);
	if (ch == 's')
		len = ft_isstring(va_arg(args, char *));
	if (ch == 'p')
		len = ft_ispointer(va_arg(args, void *), we);
	if (ch == 'i' || ch == 'd')
		len = ft_isint(va_arg(args, int));
	if (ch == 'u')
		len = ft_isunsigned(va_arg(args, unsigned int));
	if (ch == 'x')
		len = ft_ishexamin(va_arg(args, unsigned long long));
	if (ch == 'X')
		len = ft_ishexamay(va_arg(args, unsigned long long));
	if (ch == '%')
	{
		len = ft_write(1, "%", 1, we);
	}
	return (len);
}

int ft_write(int fd, char *c, int nc, int *we)
{
	int tl;

	tl = 0;
	if(*we == 0)
	{
		tl = write(fd , c, nc);
		if(tl == -1)
		{
			*we = 1;
			return(-1);
		}
	}
	return(tl);
}

int	ft_printf(char const * s, ...)
{
	va_list args;
	va_start(args, s);
	int	i;
	int total;
	int we;

	i = 0;
	total = 0;
	we = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			total += ft_type(args, s[i + 1], &we);
			if(we == 1)
				return(-1);
			i++;
		}
		else
			total += ft_write (1, (char *)&s[i], 1, &we);
		i++;
	}
	if(we == 1)
		return(-1);
	va_end(args);
	return (total);
}

/*int	main(void)
{
	int	real;
	int	mio;
	int s;
	
	s = 8546231;
	real = printf("naomi es genial = %p\n", &s);
	printf("resultdo real = %i\n", real);
	mio = ft_printf("naomi es genial = %p\n", &s);
	printf("resultado mio = %i\n", mio);

	return (0);
}
*/





