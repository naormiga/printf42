/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvilla-g <nvilla-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:41:28 by nvilla-g          #+#    #+#             */
/*   Updated: 2022/07/12 19:03:30 by nvilla-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(char const *s, ...);
int	ft_type(va_list args, char ch, int *we);
int	ft_ischar(int ch, int *we);
int	ft_isstring(char *s, int *we);
int ft_isint(int i, int *we);
int	ft_putnbr(int n);
int	ft_putchar(int nb);
char	*ft_uitoa(unsigned int n);
int	ft_ishexamin(unsigned int i, int *we);
char	*ft_divhexa(unsigned long long cociente, int len, int *we);
int	ft_ishexamay(unsigned int i, int *we);
int	ft_ispointer(void *p, int *we);
int	ft_putstr(char *str, int *we);
int	ft_write(int fd, char *c, int nc, int *we);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
char	*ft_strtolower(char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_isunsigned(unsigned int i, int *we);
#endif
