/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:49:34 by marvin            #+#    #+#             */
/*   Updated: 2026/11/11 18:49:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
    int i;
    int bytes;
    void *result;
    unsigned char *aux;

    bytes = nmemb * size;
    result = malloc(bytes);
    if (result != NULL)
    {
        aux = result;
        i = 0;
        while (i < (bytes))
        {
            aux[i] = 0;
            i++;
        }
    }
    return (result);
}