/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:00:01 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/25 19:43:24 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		node = ft_lstnew(NULL);
		if (node == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
void	del(void *content)
{
	free(content);
}
void	*ft_abouda(void *content)
{

	printf("%s\n", (char *)content);
	return (NULL);
}
int main()
{
	t_list *node = ft_lstnew("abouda");
	t_list *node2 = ft_lstnew("abouda");
	t_list *node3 = ft_lstnew("abouda");

	node->next = node2;
	node2->next = node3;

	ft_lstmap(node, ft_abouda, del);
}
