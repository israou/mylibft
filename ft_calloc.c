/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:56:06 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/08 21:30:57 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*p;

	total = count * size;
	p = (char *)malloc(total * sizeof(char));
	if (!p)
		return (0);
	ft_memset(p, 0, total);
	return (p);
}
