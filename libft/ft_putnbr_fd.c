/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:23:28 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/28 13:00:40 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		c = '-';
		write(fd, &c, 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		c = n % 10 + '0';
		ft_putnbr_fd((n / 10), fd);
		write(fd, &c, 1);
	}
	else
	{
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}
