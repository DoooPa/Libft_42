/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:17:38 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/30 02:20:13 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *block)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new -> content = block;
	new -> next = NULL;
	return (new);
}
