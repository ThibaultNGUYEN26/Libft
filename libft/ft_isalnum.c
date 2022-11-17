/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:21:55 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/14 12:31:09 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
    printf("0  : %d\n", ft_isalnum(0));
    printf("10 : %d\n", ft_isalnum(70));
    printf("50 : %d\n", ft_isalnum(100));
    printf("57 : %d\n", ft_isalnum(57));
} */