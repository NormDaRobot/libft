/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:21:31 by marvin            #+#    #+#             */
/*   Updated: 2026/11/16 16:28:58 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	aux;

	i = ft_strlen(s);
	aux = (unsigned char)c;
	if (aux == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (i > 0 && ft_isascii(aux))
	{
		if (s[i] == aux)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == aux)
		return ((char *)&s[0]);
	return (NULL);
}
