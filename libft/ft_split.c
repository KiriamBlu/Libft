/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:49:45 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/20 18:04:30 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int getnumword(char const *s, char limit)
{
	size_t i;

	i = 0;
	if(*s != limit && *s)
		i++;
	while(*(s + 1))
	{
		if (*s == limit && *(s + 1) != limit && *(s + 1) != '\0')
		{
			i++;
		}
	s++;
	}
	return(i);
}

/*char **ft_split(char const *s, char c)
{

}*/
/*
int main(int argc, char const *argv[])
{
	char j[30] = "hola.me.llamo.joan..";
	printf("%d\n", getnumword(j,'.'));
	return 0;
}*/