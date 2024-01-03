/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 07:54:30 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/03 07:57:52 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

// int	main(void)
// {
// 	char	*str = "Hello, world";
// 	int		fd = STDOUT_FILENO;
// 	ft_putstr_fd(str, fd);
// 	return (0);
// }