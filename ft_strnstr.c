/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:47:25 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/09 16:05:50 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#include <stdio.h>

char	*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ndl[i] == '\0')
		return ((char *)hst);
	while (i < len && hst[i])
	{
		j = 0;
		while (hst[i + j] && ndl[j] && hst[i + j] == ndl[j] && (i + j) < len)
			j++;
		if (ndl[j] == '\0')
			return ((char *)hst + i);
		i++;
	}
	return (NULL);
}
