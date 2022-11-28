/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:56:21 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/22 13:39:02 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  ft_intlen(long n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
    char            *res;
    unsigned int    i;
    long            nb;

    i = ft_intlen(n);
    nb = n;
    res = malloc(sizeof(char) * i + 1);
    if (!res)
        return (NULL);
    res[i--] = '\0';
    if (nb == 0)
        res[0] = '0';
    if (nb < 0)
    {
        res[0] = '-';
        nb *= -1;
    }
    while (nb > 0)
    {
        res[i] = nb % 10 + '0';
        nb /= 10;
        i--;
    }
    return (res);
}

/* int main()
{
    printf("%s\n", ft_itoa(-64356123));
    return (0);
} */