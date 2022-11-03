/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:39:04 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 23:26:25 by sakarkal         ###   ########.fr       */
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

// int main()
// {
// 	// int awbx = 0x78627761;
// 	// int king = 0x676e696b;
// 	// char t[] = "awbxking";
// 	// int p[] = {awbx, king};

// 	// char t[] = "\322\0\0\0\162\25\0\0\300\377\377\377";
// 	// int p[] = {210, 5490, -64};

// }