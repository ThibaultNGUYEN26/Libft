/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:36:06 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 14:16:02 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)dst;
	while (i < n)
	{
		*d = *(char *)src;
		d++;
		src++;
		i++;
	}
	d[i] = '\0';
	return (d);
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