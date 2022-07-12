/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:13:03 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/12 19:02:42 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*static int	num_digits(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;
	int		i;

	if (n == 0)
		write(1, "0", 1);
	len  = num_digits(n);
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	i = len - 1;
	while (n != '\0')
	{
		num[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (num);
}*/

int	ft_isunsigned(unsigned int i, int *we)
{
	int	tlen;
	char c;

	c = 0;
	tlen = 0;
	if (i >= 10)
	{
		tlen += ft_isint(i / 10, we);
		tlen += ft_isint(i % 10, we);
	}
	else
	{
		c = i + 48;
		tlen += ft_write(1, &c, 1, we);
	}
	return(tlen);
}
