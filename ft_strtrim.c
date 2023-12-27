/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:19:36 by junesalaber       #+#    #+#             */
/*   Updated: 2023/12/27 18:12:28 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (ft_strchr(set, s1[len - 1]) && len > start)
	{
		len--;
	}
	str = (char *)malloc((len - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], (len - start + 1));
	str[len - start] = '\0';
	return (str);
}

// int main(void)
// {
//     const char *cadena = "  ¡ Hola, mundo!   ";
//     const char *patron = " ¡!"; // Caracteres a eliminar

//     char *resultado = ft_strtrim(cadena, patron);

//     if (resultado != NULL) {
//         printf("Cadena original: \"%s\"\n", cadena);
//         printf("Cadena sin los caracteres del patrón: \"%s\"\n", resultado);
//         free(resultado);
//     } else {
//         printf("Error al procesar la cadena.\n");
//     }

//     return 0;
// }