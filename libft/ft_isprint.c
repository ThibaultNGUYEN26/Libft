/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:32:34 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/15 12:02:42 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	printf("0  : %d\n", ft_isprint(0));
	printf("10 : %d\n", ft_isprint(70));
	printf("50 : %d\n", ft_isprint(100));
	printf("57 : %d\n", ft_isprint(57));
} */