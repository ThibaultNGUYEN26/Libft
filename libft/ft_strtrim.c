/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:05:12 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/21 17:43:54 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	begin;
	size_t	end;

	ret = 0;
	if (!s1 || !set)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > begin)
		end--;
	ret = malloc(sizeof(char) * (end - begin + 1));
	if (!ret)
		return (NULL);
	else
		ft_strlcpy(ret, (char *)(s1 + begin), end - begin + 1);
	return (ret);
}
