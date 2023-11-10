/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:12:22 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/10 01:42:59 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (n > 0)
	{
		s[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}

// int main(void)
// {
// 	int a = -1;
// 	ft_memset(&a, 0, 4);
// 	ft_memset(&a, 5, 2);
// 	ft_memset(&a, 57, 1);
// 	printf("%d\n",a);
// }
