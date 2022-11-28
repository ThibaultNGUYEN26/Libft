/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:56:21 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/28 14:13:37 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	len = ft_intlen(n);
	nb = n;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		res[0] = '0';
	res[len] = '\0';
	while (nb)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

/* int main()
{
	printf("%s\n", ft_itoa(0));
	return (0);
} */