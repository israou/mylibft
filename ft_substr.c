/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:36:34 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/09 01:13:13 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	r;
	size_t	i;

	i = 0;
	r = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= r)
	{
		start = r;
		len = 0;
	}
	else if (start + len > r)
		len = r - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
