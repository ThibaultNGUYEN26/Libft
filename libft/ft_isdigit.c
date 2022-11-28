/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:18:45 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/15 12:01:48 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
    printf("0  : %d\n", ft_isdigit(0));
    printf("10 : %d\n", ft_isdigit(10));
    printf("50 : %d\n", ft_isdigit(50));
    printf("57 : %d\n", ft_isdigit(57));
} */
