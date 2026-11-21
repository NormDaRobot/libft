/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:54:10 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/21 15:40:39 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_size(long n)
{
	if (n < 0)
		return (1 + int_size(-n));
	if (n >= 10)
		return (1 + int_size(n / 10));
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	num;

	num = n;
	size = int_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = 0;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--size] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int numero = 123;
	char *palabra = ft_itoa(numero);
	printf("%s", palabra);
	free(palabra);
	return (0);
}*/