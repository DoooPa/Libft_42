/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:48:35 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 22:28:08 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

// int	main()
// {
	// int	a[] = {11, 22, 33, 44};
	// int *ptr = ft_memchr(a, 22, sizeof(a));
	// printf("%d\n", ptr? *ptr: -1);
	// write(1, a, 16);
// }