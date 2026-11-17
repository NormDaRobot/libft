/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:48:50 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/14 17:26:53 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ to each character of the string passed as argument,
passing its index as the first argument. Each character is passed by address
to ’f’ so it can be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
