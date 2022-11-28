/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:05:34 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/25 16:05:34 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  tmp;

	if (lst)
	{
		while (*lst)
		{
			del(*lst->content)
			tmp = *lst;
			*lst = *lst->next;
			free(tmp);
		}
	}
}