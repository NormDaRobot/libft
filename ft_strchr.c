/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:07:52 by marvin            #+#    #+#             */
/*   Updated: 2026/11/10 19:07:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char aux;

    i = 0;
    aux = c;
    while (s[i])
    {
        if (s[i] == aux)
            return (&aux);
        i++;
    }
    return NULL;
}