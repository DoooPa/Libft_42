/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:18:36 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/29 20:21:51 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
t_list	*ft_lstnew(void *block)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new -> content = block;
	new -> next = NULL;
	return (new);
}

int main()
{
	t_list *head,*head1,*head2;
	head = ft_lstnew("saad");
	head1 = ft_lstnew("f1ff3f");
	head2 = ft_lstnew("okug,");
	head->next = head1;
	head1->next = head2;
	ft_lstadd_front(&head,ft_lstnew("fiddler"));
	while(head)
	{
		printf("%s\n",head->content);
		head = head->next;
	}
}