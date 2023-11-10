/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:34:49 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/06 12:40:02 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*pa;

	i = 0;
	len = ft_strlen(src);
	pa = (char *)malloc(sizeof(char) * (len + 1));
	if (pa == NULL)
		return (NULL);
	while (i < len)
	{
		pa[i] = src[i];
		i++;
	}
	pa[i] = '\0';
	return (pa);
}
