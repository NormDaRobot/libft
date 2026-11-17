/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:54:10 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/14 18:53:47 by gfiguero         ###   ########.fr       */
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
	char	*str;
	size_t	size;

	size = int_size(n);
	if (n < 0)
		size++;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (n / 10 > 0)
	{
		str[size] = n % 10;
		n /= 10;
		size--;
	}
	return (str);
}
