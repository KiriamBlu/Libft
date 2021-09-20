/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:39:15 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/15 12:13:06 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t len)
{
  char *d = dest;
  const char *s = src;
  const char *lasts;
  char *lastd;
  
  if (d < s)
    while (len-- > 0)
      *d++ = *s++;
  else
    {
      lasts = s + (len-1);
      lastd = d + (len-1);
        while (len-- > 0)
          *lastd-- = *lasts--;
    }
  return dest;
}
