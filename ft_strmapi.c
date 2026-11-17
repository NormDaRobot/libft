/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:27:20 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 11:14:00 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function f to each character of the string s, passing its index
as the first argument and the character itself as the second. A new string is
created (using malloc(3)) to store the results from the successive applications
of f.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*str;
	size_t			i;

	str = malloc(sizeof(unsigned char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	str[ft_strlen(s) + 1] = 0;
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return ((char *)str);
}
