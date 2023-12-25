/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 08:37:29 by junesalaber       #+#    #+#             */
/*   Updated: 2023/12/25 09:30:47 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
int main(void)
{
    char    text[] = "hola";
    int     a = 'x';

    printf("%s\n", ft_strchr(text, a));
    return (0);
}
*/