/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:01:04 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 17:10:13 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

static int	num_digits(int n)
{
	int	n_lenght;

	n_lenght = 0;
	if (n < 0)
	{
		n_lenght++;
		n = n * -1;
	}
	while (n)
	{
		n = n / 10;
		n_lenght++;
	}
	return (n_lenght);
}

char	*ft_itoa(int n)
{
	char	*num;
	char	digit;
	int		n_lenght;	

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	n_lenght = num_digits(n);
	num = malloc(sizeof(char) * (n_lenght + 1));
	if (!num)
		return (NULL);
	if (n < 0)
		n = -n;
	num[n_lenght] = '\0';
	while (n > 0)
	{
		digit = (n % 10) + '0';
		num[n_lenght - 1] = digit;
		n = n / 10;
		n_lenght--;
	}
	if (n_lenght == 1)
		num[n_lenght -1] = '-';
	return (num);
}
