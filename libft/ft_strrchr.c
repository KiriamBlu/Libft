/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:25:51 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/22 13:50:30 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = strlen(str);
	while (str[i] != '\0')
		i++;
	while (i > 0 && str[i] != (unsigned char)c)
		i--;
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (0);
}
