/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:59:04 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/17 15:06:09 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		i;
	int		j;
	int		size;
	int		s1_len;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (size == 0)
	{
		return (ft_strdup(""));
	}
	c = malloc(sizeof(char) * size + 1);
	if (!c)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	i = 0;
	while (i < s1_len)
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		c[i] = s2[j];
		i++;
		j++;
	}
	c[i] = 0;
	return (c);
}
