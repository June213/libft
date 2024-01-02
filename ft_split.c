/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:49:44 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/02 12:40:05 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_allocate(char const *s, char c)
// {
// 	int		subs;
// 	int		count;

// 	count = 0;
// 	subs = 0;
// 	while (*s)
// 	{
// 		if (*s != c && !subs)
// 		{
// 			subs = 1;
// 			count++;
// 		}
// 		else if (*s == c)
// 			subs = 0;
// 		s++;
// 	}
// 	return (count);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char		**str;
// 	char		*start;
// 	int			len;
// 	int			i;
// 	int			count;

// 	count = ft_allocate(s, c);
// 	str = (char **)malloc((count + 1) * sizeof(char));
// 	if(!str)
// 		return (NULL);
// 	i = 0;
// 	start = (char *)s;
// 	while (*start && *start == c)
// 		start++;
// 	while (*s)
// 	{
// 		if (*s == c)
// 		{
// 			len = s - start;
// 			str[i] = (char *)malloc((len +1) * sizeof(char));
// 			if (!str[i])
// 				return (NULL);
// 			ft_memcpy(str[i], start, len);
// 			str[i][len] = '\0';
// 			i++;
// 			start = (char *)s + 1;
// 		}
// 		s++;
// 	}
// 	len = s - start;
// 	str[i] = (char *)malloc((len +1) * sizeof(char));
// 	if (!str[i])
// 		return (NULL);
// 	ft_memcpy(str[i], start, len);
// 	str[i][len] = '\0';
// 	return (str);
// }

// static void	ft_free(char **str1)
// {
// 	int	i;

// 	i = 0;
// 	if (!str1)
// 	while (str1[i] != NULL)
// 	{
// 		free(str1[i]);
// 		str1[i] = NULL;
// 		i++;
// 	}
// 	free(str1);
// }

// int	main(void)
// {
// 	char	text[] = "Hola-que-tal";
// 	char	delimitador = '-';
// 	char	**rdo;
// 	int		i;

// 	i = 0;
// 	rdo = ft_split(text, delimitador);
// 	if (!rdo) {
//         printf("Error al dividir la cadena.\n");
//         return 1;
//     }

//     printf("Resultado:\n");
//     while (rdo[i] != NULL) 
// 	{
//         printf("%s\n", rdo[i]);
// 		i++;
//     }

//     ft_free(rdo);
// 	return (0);
// }