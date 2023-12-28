/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:49:44 by junesalaber       #+#    #+#             */
/*   Updated: 2023/12/28 13:16:45 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_allocate(char const *s, char c)
{
	char		*temp;
	size_t		count;

	temp = s;
	count = 1;
	while (temp != '\0')
	{
		if (temp == c)
			count++;
		temp++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	char		start;
	int			len;
	int			i;

	str = (char *)malloc((ft_allocate(s, c)) * sizeof(char));
	i = 0;
	start = s;
	while (*s)
	{
		if (*s == c)
		{
			len = s - start;
			*str[i] = (char *)malloc((len +1) * sizeof(char));
			if (!str[i])
				return (NULL);
			ft_memcpy(str[i], start, len);
			str[i][len] = '\0';
			i++;
			start = s + 1;
		}
		s++;
	}
}

int	main(void)
{
	char	text[] = "Hola-que-tal";
	char	text1 = '-';
	char	**rdo;

	rdo = ft_split(text, text1);
	printf("%s", rdo[0]);
	printf("%s", rdo[1]);
	printf("%s", rdo[2]);
	return (0);
}