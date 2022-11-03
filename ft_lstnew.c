/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:17:38 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 22:27:25 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new -> content = content;
	new -> next = NULL;
	return (new);
}

// int main()
// {
// 	t_list *head;

// 	head = ft_lstnew("saad");
// 	printf("%s\n", head->content);
// 	printf("%p\n", head->next);
// 	free(head);
// }
