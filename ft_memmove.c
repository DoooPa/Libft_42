/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:19:58 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/27 11:23:42 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	s = src;
	d = dest;
	if (d == NULL && s == NULL)
		return (dest);
	if (d < s)
		while (n--)
		*d++ = *s++;
	else
	{
		lastd = d + (n - 1);
		lasts = s + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}

// int main()
// {
// 	// char dst[20] = "abc123123";
// 	char *src = "AABBCC";
// 	// int len = strlen(dst);
// 	// printf("|%s|", memmove(NULL, b, 5));
// 	printf("-%s", ft_memmove(NULL, src, 5));
// 	return 0;
// }