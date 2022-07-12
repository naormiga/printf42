/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divhexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:55:46 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 18:00:17 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_divhexa(unsigned long long cociente, int len)
{
	char	*hexa;
	int		residuo;

	hexa = malloc(sizeof(char) * (len + 1));
	if (!hexa)
		return (0);
	hexa[len] = '\0';
	while (cociente)
		{
			residuo = cociente % 16;
			if (residuo < 10)
				residuo = residuo + 48;
			else
				residuo = residuo + 55;
			hexa[len - 1] = residuo;
			cociente = cociente / 16;
			len--;
		}
	return(hexa);
}
