/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:06:15 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/22 13:58:23 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumword(char const *s, char limit)
{
	size_t	i;

	i = 0;
	if (*s != limit && *s)
		i++;
	while (*(s + 1))
	{
		if (*s == limit && *(s + 1) != limit && *(s + 1) != '\0')
			i++;
		s++;
	}
	return (i);
}

static void	storagewords(char **str, char **auxi, char c, int getword)
{
	int		j;
	char	*aux;

	j = 0;
	if (getword != 0 && **str)
	{
		while (**str == c)
		{
			j++;
			*str = *str + 1;
		}
		aux = ft_strchr(*str, c);
		*auxi = ft_substr(*str, 0, aux - *str);
		j = 0;
		while (j < aux - *str)
			*str = *str + 1;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	char	*str;
	int		n_words;
	int		i;

	i = 0;
	aux = NULL;
	if (s)
	{
		str = (char *)s;
		n_words = getnumword(str, c);
		aux = ft_calloc(n_words + 1, sizeof(char *));
		aux[n_words] = NULL;
		if (!aux)
			return (0);
		while (i < n_words)
		{
			storagewords(&str, &(aux[i]), c, n_words);
			i++;
		}
	}
	return (aux);
}

/*int main(int argc, char const *argv[])
{
	char l[36] = "..hola..joan.l.pedro.... ..loco.";
	char **j;
	int i;

	i = 0;
	printf("%s\n", l);
	j = ft_split(l,'.');
	while(i < getnumword(l, '.'))
	{
		printf("Palabra[%d] = %s\n",i, j[i]);
		i++;
	}
	return 0;
}*/
