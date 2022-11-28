/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:25:26 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/21 14:29:51 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	size_dst = j;
	if (size_dst > dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[i] && (j < (dstsize - 1)))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + size_dst);
}
