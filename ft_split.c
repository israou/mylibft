/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:43:20 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/09 23:33:56 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != 0)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_getw(const char *s, char c, int *i)
{
	char	*ptr;
	int		start;
	int		len;
	int		k;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (0);
	k = 0;
	while (*i - start > k)
	{
		ptr[k] = s[start + k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		wc;
	int		r;
	int		i;

	wc = ft_countw(s, c);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (res == NULL)
		return (NULL);
	r = 0;
	i = 0;
	while (wc > r)
	{
		res[r] = ft_getw(s, c, &i);
		if (!res[r])
			return (ft_free(res));
		r++;
	}
	res[wc] = NULL;
	return (res);
}
