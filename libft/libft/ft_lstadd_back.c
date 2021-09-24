/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:33:56 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/22 13:42:18 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(lst)
	{
		if (!(*lst))
		{
			*lst = new;
			return ;
		}
		if(!lst)
			return ;
		else
		{
			(ft_lstlast(*lst))->next = new; 
		}
	}	
}