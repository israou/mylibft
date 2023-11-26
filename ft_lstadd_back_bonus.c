/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:03:52 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/18 13:31:12 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lis;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		lis = ft_lstlast(*lst);
		lis->next = new;
	}
	else
	{
		(*lst) = new;
	}
}
