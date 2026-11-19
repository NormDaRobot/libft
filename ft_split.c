/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:13:24 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/19 19:08:25 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				words++;
		}
		i++;
	}
	return (words);
}

static size_t	ft_word_len(const char *s, const char c, size_t pos)
{
	size_t	word_len;
	size_t	this_pos;
	size_t	i;

	this_pos = 0;
	i = 0;
	word_len = 0;
	while (s[i] && (s[i] == c)) /*skip initials c*/
		i++;
	while (s[i] && this_pos < pos) /*go to the word*/
	{
		if (s[i] == c) /*if in a c, last word end*/
		{
			this_pos++;
			while (s[i] && (s[i] == c)) /*skip inner c*/
				i++;
		}
		else
			i++;
	}
	while (s[i] && (s[i] != c)) /*count len*/
	{
		word_len++;
		i++;
	}
	return (word_len);
}

static void	ft_delete_all(char **str, size_t i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static char	**ft_create_str(char const *s, char c)
{
	char	**str;
	int		words;
	int		word_len;
	int		i;

	words = ft_countwords(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	str[words] = NULL;
	i = 0;
	word_len = 0;
	while (i < words)
	{
		word_len = ft_word_len(s, c, i);
		str[i] = malloc(sizeof(char) * (word_len + 1));
		if (!str[i])
		{
			ft_delete_all(str, i);
			return (NULL);
		}
		str[i][word_len] = 0;
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	word_len;

	str = ft_create_str(s, c);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	j = 0;
	while (i < ft_countwords(s, c))
	{
		while (s[k] && s[k] == c)
			k++;
		word_len = ft_word_len(s, c, i);
		j = 0;
		while (j < word_len)
		{
			str[i][j] = s[k];
			j++;
			k++;
		}
		str[i][j] = '\0';
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char **result = ft_split("  Hola     que tal", ' ');
	ft_putstr_fd(result[0], 1);
	ft_putstr_fd(result[1], 1);
	ft_putstr_fd(result[2], 1);
	return (0);
}*/