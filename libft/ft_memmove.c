/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:57:59 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/16 11:34:36 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char src[14] = "Hello World !";
	char dest[8] = "Hello !";
	printf("Before memmove()    : %s\n", dest);
	memmove(dest, src, 8);
	printf("After memmove()     : %s\n", dest);

	char src2[14] = "Hello World !";
	char dest2[8] = "Hello !";
	strcpy(dest2, "Hello !");
	printf("Before ft_memmove() : %s\n", dest2);
	ft_memmove(dest2, src2, 8);
	printf("After ft_memmove()  : %s\n", dest2);
} */