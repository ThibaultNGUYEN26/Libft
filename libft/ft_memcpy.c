/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:36:06 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/17 17:35:10 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char src[14] = "Hello World !";
	char dest[50];
	strcpy(dest, "Hello !");
	printf("Before memcpy()    : %s\n", dest);
	memcpy(dest, src, 14);
	printf("After memcpy()     : %s\n", dest);

	char src2[14] = "Hello World !";
	char dest2[50];
	strcpy(dest2, "Hello !");
	printf("Before ft_memcpy() : %s\n", dest2);
	ft_memcpy(dest2, src2, 14);
	printf("After ft_memcpy()  : %s\n", dest2);
} */