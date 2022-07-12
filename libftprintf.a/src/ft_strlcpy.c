/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:25:36 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 17:15:09 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size != 0)
	{
		i = 0;
		while (i < size)
		{
			if (src[i] == '\0')
			{
				dest[i] = src[i];
				return (len);
			}
			dest[i] = src[i];
			i++;
		}
		dest[i - 1] = '\0';
		return (len);
	}
	return (len);
}
