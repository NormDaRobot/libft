/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:07:52 by marvin            #+#    #+#             */
/*   Updated: 2026/11/16 20:33:16 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	aux;

	aux = (unsigned char)c;
	if (aux == '\0')
		return ((char *)&s[ft_strlen(s)]);
	i = 0;
	if (ft_isascii(aux))
	{
		while (s[i])
		{
			if (s[i] == aux)
				return ((char *)&s[i]);
			i++;
		}
	}
	return (NULL);
}
