/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:07:31 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/04 12:02:40 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*map;
	t_list	*new;

	new = NULL;
	while (lst)
	{
		map = ft_lstnew((*f)(lst->content));
		if (!map)
		{
			ft_lstclear(&new, (*del));
			return (0);
		}
		ft_lstadd_back(&new, map);
		lst = lst->next;
	}
	return (new);
}

// void print_int(void *content) {
//     printf("%d\n", *(int *)content);
// }

// int main(void) 
// {
// 	t_list *first = ft_lstnew((void *)1);
// 	t_list *second = ft_lstnew((void *)2);
//     int *number1 = malloc(sizeof(int));
// 	int *number2 = malloc(sizeof(int));

//     *number1 = 42;
// 	*number2 = 100;
//     first->content = number1;
//     first->next = second;
// 	second->content = number2;
// 	second->next = NULL;

//     ft_lstiter(first, print_int); 

//     return 0;
// }