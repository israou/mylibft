/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:18:31 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/13 03:01:58 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p;
	char	*r;

	i = 0;
	p = (char *)s1;
	r = (char *)s2;
	while (i < n)
	{
		if (p[i] != r[i])
			return ((unsigned char)p[i] - (unsigned char)r[i]);
		i++;
	}
	return (0);
}
