/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:39:04 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/04 02:02:52 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (len)
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		len--;
	}
	return (0);
}
