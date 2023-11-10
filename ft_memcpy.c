/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:35:52 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/05 19:34:37 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*r;

	i = 0;
	p = (char *) src;
	r = (char *) dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		r[i] = p[i];
		i++;
	}
	return (dest);
}
