/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:18:49 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/25 16:18:49 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (NULL);
	ret = ret->next;
	while (lst)
	{
		ret = f(lst->content);
		lst = lst->next;
		ret = ret->next;
		free(lst);
	}
}