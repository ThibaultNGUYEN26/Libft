/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:09:01 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 18:06:49 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	char src[14] = "Hello World !";
	char dest[50];
	strcpy(dest, "Hello !");
	printf("Before strlcpy()    : %s\n", dest);
	strlcpy(dest, src, 5);
	printf("After strlcpy()     : %s\n", dest);

	char src2[14] = "Hello World !";
	char dest2[50];
	strcpy(dest2, "Hello !");
	printf("Before ft_strlcpy() : %s\n", dest2);
	ft_strlcpy(dest2, src2, 5);
	printf("After ft_strlcpy()  : %s\n", dest2);
} */