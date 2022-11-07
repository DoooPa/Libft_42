/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:54:40 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/05 21:46:36 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = -1;
	if ((!dstsize && !dst) || !dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	while (src[++i] && i + dst_len < dstsize - 1)
		dst[i + dst_len] = src[i];
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
