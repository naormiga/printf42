/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexamay.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:54:07 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 17:01:08 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_ishexamay(unsigned long long i)
{
	int	len;
	int cociente;
	int	len2;
	char	*hexa;

	len = 0;
	cociente = i;
	while (i)
	{
		i  = i / 16;
		len++;
	}
	len2 = len;
	hexa = ft_divhexa(cociente, len);
	ft_putstr(hexa);
	return (len2);
}
