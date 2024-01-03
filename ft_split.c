/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:49:44 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/03 14:09:47 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		subs;
	int		count;
	int		i;

	count = 0;
	subs = 0;
	i = 0;
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

static char	*ft_create_word(char const *s, int start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((len - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (len > start)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		i;
	int			j;
	int			a;

	str = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	a = -1;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && a < 0)
			a = i;
		else if (s[i] == c || (i == ft_strlen(s) && a >= 0) || s[i] == '\0')
		{
			str[j++] = ft_create_word(s, a, i);
			a = -1;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

int main(void)
{
    char *input_string ="0 0 0 0 0 0 0 0 0";
    char **result = ft_split(input_string, ' ');

    if (result)
    {
        // Imprimir las subcadenas resultantes
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("Substring %d:%s\n", i + 1, result[i]);
        }

        // Liberar la memoria asignada para las subcadenas y el array
        for (int i = 0; result[i] != NULL; i++)
        {
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}

// int	main(void)
// {
// 	char	text[] = "Hola";
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
//     	while (*rdo) 
// 		{
// 			printf("dentrodel while");
//         	printf("%s\n", rdo[i]);
//          	i++;
// 		}	
// 		temp = rdo;
// 		while (*temp != NULL)
// 		{
// 			free(*temp);
// 			temp++;
// 		}
// 		free(rdo);
// 	}
// 	else
// 		printf("Fallo de memoria.\n");
// 	return (0);
// }