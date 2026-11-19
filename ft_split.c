/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:13:24 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/17 16:42:23 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;

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

static int	ft_word_len(const char *s, const char c, int pos)
{
	int	word_len;
	int	this_pos;
	int	i;

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

static void	ft_delete_all(char **str, int i)
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
	int		i;
	int		j;
	int		k;

	str = ft_create_str(s, c);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (s[k] != c)
			{
				str[i][j] = s[k];
				j++;
			}
			k++;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	**result;
	int		i;

	// Caso de prueba 1: Frase normal con espacios
	char const *str1 = "  Hola  mundo  esto  es  Libft  ";
	char		c1 = ' ';

	printf("--- PRUEBA 1: \"%s\" (delimitador: '%c') ---\n", str1, c1);
	result = ft_split(str1, c1);
	if (!result)
	{
		printf("¡Error: ft_split devolvió NULL!\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		free(result[i]); // Liberamos la memoria de cada palabra
		i++;
	}
	free(result); // Liberamos el array principal de punteros
	printf("\n");

	// Caso de prueba 2: Delimitador personalizado (ej. coma)
	char const *str2 = ",,,manzana,,pera,banana,,,";
	char		c2 = ',';

	printf("--- PRUEBA 2: \"%s\" (delimitador: '%c') ---\n", str2, c2);
	result = ft_split(str2, c2);
	if (!result)
	{
		printf("¡Error: ft_split devolvió NULL!\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("\n");

	// Caso de prueba 3: Cadena vacía o solo delimitadores
	char const *str3 = "      ";
	char		c3 = ' ';

	printf("--- PRUEBA 3: Cadena solo de espacios ---\n");
	result = ft_split(str3, c3);
	if (result && result[0] == NULL)
		printf("¡Perfecto! Devuelve un array vacío (solo con NULL).\n");

	i = 0;
	while (result && result[i])
	{
		free(result[i]);
		i++;
	}
	if (result)
		free(result);

	return (0);
}*/