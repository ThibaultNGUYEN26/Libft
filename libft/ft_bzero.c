/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:11:59 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 13:46:28 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)s;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	char str[14] = "Hello World !";
	printf("Before bzero()    : %s\n", str);
	bzero(str, 4);
	printf("After bzero()     : %s\n", str);

	char str2[14] = "Hello World !";
	printf("\nBefore ft_bzero() : %s\n", str2);
	ft_bzero(str2, 4);
	printf("After ft_bzero()  : %s\n", str2);
} */