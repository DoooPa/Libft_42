/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:54:40 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/31 18:35:08 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;
	size_t	res;

	i = 0;
	j = 0;
	if (dstsize == 0 || dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[j] != '\0')
		j++;
	dstlen = j;
	srclen = ft_strlen(src);
	if (dstsize > dstlen)
		res = srclen + dstlen;
	else
		res = srclen + dstsize;
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}

// int    main()
// {
// 	// char    tab[50] = "12456";
// 	char    src[] = "abcddddddd";

// 	printf("%zu\n", ft_strlcat(NULL, src, 0));
// 	// printf("%zu\n", strlcat(NULL, src, 0));
// 	printf("%s\n", src);
// }