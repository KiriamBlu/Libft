/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:52:25 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/20 18:00:35 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	if (*needle == '\0')
		return((char *)haystack);
	if (len == 0)
		return (NULL);
	
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return((char*)(haystack + i));
		i++;
	}
	return (NULL);
}

/*int main(int argc, char const *argv[])
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s\n", ft_strnstr(empty, "", -1));
	printf("%s\n", strnstr(empty, "", -1));
	return 0;
}*/