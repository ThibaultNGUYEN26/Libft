/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:50 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/21 15:07:35 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (!haystack && len == 0)
		return (NULL);
	if (n_len == 0)
		return ((char *)haystack);
	if (haystack[i] == 0 || ft_strlen(haystack) < n_len)
		return (NULL);
	while (i <= len - n_len && len)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
