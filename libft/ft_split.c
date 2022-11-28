/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:43:13 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/28 18:45:54 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	i;
	int	test;
	int	counter;

	i = 0;
	test = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c && test == 0)
		{
			test = 1;
			counter++;
		}
		else if (str[i] == c)
			test = 0;
		i++;
	}
	return (counter);
}

static char	*ft_allocate(const char *s, char c, int *i, char **ret)
{
	int		j;
	char	*str;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	str = ft_substr(s, 0, j);
	if (str == NULL)
	{
		while (ret)
			free(*ret++);
		free(ret);
		return (NULL);
	}
	*i += j - 1;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ret)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (s[i] != c)
			ret[j++] = ft_allocate(&s[i], c, &i, ret);
	ret[j] = NULL;
	return (ret);
}

/* int	main(void)
{
	char str[22] = "   thibault ";
	char c = ' ';
	int counter = ft_count(str, c);
	char **split;
	
	split = ft_split(str, c);
	
	printf("\n");
	printf("Nb words : %d\n", counter);
	for (int i = 0; i < counter; i++)
		printf("%s\n", split[i]); 
	return (0);
} */