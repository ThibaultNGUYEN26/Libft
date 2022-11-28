/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:31:56 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/28 15:21:43 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*begin_ret;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	begin_ret = NULL;
	while (lst)
	{
		ret = ft_lstnew(f(lst->content));
		if (!ret)
			ft_lstclear(&ret, del);
		else
		{
			ft_lstadd_back(&begin_ret, ret);
			lst = lst->next;
		}
	}
	return (begin_ret);
}
