/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:51:19 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/15 12:27:29 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
    printf("101 : %d\n", ft_isalpha(101));
    printf("100 : %d\n", ft_isalpha(100));
    printf("160 : %d\n", ft_isalpha(160));
    printf("2   : %d\n", ft_isalpha(2));
} */
