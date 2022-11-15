/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:44:24 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 17:36:20 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len)
	{
		*s = c;
		s++;
		len--;
	}
	return (b);
}

/* #include <stdio.h>

int	main(void)
{
	char str[14] = "Hello World !";
	printf("Before memset()    : %s\n", str);
	memset(str + 1, '$', 4);
	printf("After memset()     : %s\n", str);

	char str2[14] = "Hello World !";
	printf("\nBefore ft_memset() : %s\n", str2);
	ft_memset(str2 + 1, '$', 4);
	printf("After ft_memset()  : %s\n", str2);
} */