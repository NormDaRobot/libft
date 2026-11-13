/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:24:18 by marvin            #+#    #+#             */
/*   Updated: 2026/11/10 19:24:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, unsigned int n)
{
    int i;
    char aux;
    unsigned char *str_s;

    i = 0;
    aux = c;
    str_s = s;
    while (i < n)
    {
        if (str_s[i] == aux)
            return (&aux);
        i++;
    }
    return NULL;
}