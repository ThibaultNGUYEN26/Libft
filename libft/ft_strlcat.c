/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:25:26 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/17 14:19:23 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	size_dst;
	unsigned int	size_src;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (dstsize == 0 || size_dst >= dstsize)
		return (size_src + dstsize);
	while (src[i] && i < (dstsize - size_dst - 1))
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_src + size_dst);
}
