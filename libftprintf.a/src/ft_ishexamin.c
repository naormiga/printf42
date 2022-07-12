/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexamin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:52:56 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 17:06:57 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_ishexamin(unsigned long long i)
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
	hexa = ft_strtolower(hexa);
	ft_putstr(hexa);
	return (len2);
}
