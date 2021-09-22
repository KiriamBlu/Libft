/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:48:51 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/22 14:10:54 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	size_t l;
	char *str;

	if(!s || !f)
		return(NULL);
	l = ft_strlen(s);
	str = ft_calloc(l + 1, sizeof(char));
	if(!str)
		return(NULL);
	i = 0;
	while (i < l && str)
	{
		*str++ = (*f)(i, *(s + i)); 
		i++;
	}
	*str = '\0';
	return (str);
}
