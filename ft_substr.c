/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:19:49 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/27 16:25:21 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s) - start;
	if (len < slen)
		return (len);
	else
		return (slen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	min;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	min = ft_min(s, start, len);
	dest = (char *)malloc(sizeof(char) * min + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s + start, min);
	dest[len] = '\0';
	return (dest);
}

// int main()
// {
// 	char *t = NULL;
// 	unsigned int s = 2;
	
// 	size_t len = 10;
// 	printf("%s\n", ft_substr(t, s, len));
// }