/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:20:16 by marvin            #+#    #+#             */
/*   Updated: 2026/11/11 19:20:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    int len;
    char *new;

    len = ft_strlen(s1);
    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new[i] = s1[i];
        i++;
    }
    new[i] = 0;
    return (new);
}