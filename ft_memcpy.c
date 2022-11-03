/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:14:21 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/02 11:21:06 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	s = src;
	d = dest;
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

// int main()
// {
// 	char dst[20] = "abc123\n";
// 	char *src = "AABBCC";
// 	int len = strlen(dst);
// 	printf("%s", ft_memcpy(dst + 3, dst, len + 1));
// 	return 0;
// }