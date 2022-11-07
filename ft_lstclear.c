/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:49:06 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/05 21:54:07 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*yes;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		yes = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = yes;
	}
	*lst = NULL;
}
