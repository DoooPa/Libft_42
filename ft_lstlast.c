/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:20:59 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 23:26:12 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	human_t humans[10];
// 	for (int i = 0;i < 10 ;i += 1)
// 	{
// 		humans[i].Age = i + 1;
// 	}
// 	for (int i = 0;i < 10 ;i += 1)
// 	{
// 		printf("%d\n", humans[i].Age);
// 	}
// }