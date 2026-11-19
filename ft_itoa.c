/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:54:10 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/19 20:14:27 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_size(int n)
{
	if (n / 10 > 0)
		return (1 + int_size(n / 10));
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	int long	num;

	num = n;
	size = int_size(n);
	if (num < 0)
		size++;
	str = calloc(sizeof(char), (size + 1));
	if (!str)
		return (NULL);
	str[size] = 0;
	if (num < 0)
		str[0] = '-';
	while (num / 10 > 0)
	{
		str[size] = (num % 10) + 0;
		num /= 10;
		size--;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int numero = 123;
	char *palabra = ft_itoa(numero);
	printf("%s", palabra);
	free(palabra);
	return 0;
}*/