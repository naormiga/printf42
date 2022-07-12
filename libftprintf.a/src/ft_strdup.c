/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:52:21 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/11 17:12:31 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*p;

	len = ft_strlen((char *)s1) + 1;
	p = malloc(len * sizeof(char));
	if (p)
	{
		ft_strlcpy(p, (char *)s1, len);
		return (p);
	}
	return (0);
}
