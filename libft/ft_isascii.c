/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:25:48 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 12:28:45 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* #include <stdio.h>

int main(void)
{
    printf("0   : %d\n", ft_isascii(0));
    printf("10  : %d\n", ft_isascii(10));
    printf("50  : %d\n", ft_isascii(50));
    printf("-10 : %d\n", ft_isascii(-10));
} */