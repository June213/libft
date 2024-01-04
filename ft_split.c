/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:33:47 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/04 11:13:13 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		subs;
	int		count;

	count = 0;
	subs = 0;
	while (*s)
	{
		if (*s != c && !subs)
		{
			subs = 1;
			count++;
		}
		else if (*s == c)
			subs = 0;
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free(const char **str, size_t len)
{
	while (len--)
		free((void *)str[len]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		len;
	size_t		subs;

	i = 0;
	subs = 0;
	len = ft_count_words(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		subs = ft_numchar(s, c);
		str[i] = (char *)malloc((subs +1) * sizeof(char *));
		if (!str[i])
			return (ft_free((const char **)str, len));
		ft_strlcpy(str[i], s, (subs + 1));
		s = ft_strchr(s, (int)c);
		i++;
	}
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	char	text[] = "Hola-que tal-estas";
// 	char	delimitador = '-';
// 	char	**temp;
// 	char	**rdo;
// 	int		i;

// 	i = 0;
// 	rdo = (char **)malloc(sizeof(char *) * 1);
// 	rdo = ft_split(text, delimitador);
// 	if (rdo)
// 	{
// 		printf("Cadena original: %s\n", text);
// 		printf("Resultado: \n");
//     	while (rdo[i] != NULL) 
// 		{
//         	printf("%s\n", rdo[i]);
// 			i++;
// 		}	
// 		free(rdo);
// 	}
// 	else
// 		printf("Fallo de memoria.\n");
// 	return (0);
// }