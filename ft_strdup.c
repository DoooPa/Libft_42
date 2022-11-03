/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:19:42 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 19:14:32 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*p;

	len = ft_strlen(s1);
	i = 0;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}

// int main()
// {
// 	char source[] = "1337_khouribga 42";
// 	char *dest;
// 	dest = ft_strdup(source);
// 	// A copy of source is created dynamically
// 	// and pointer to copy is returned.

// 	printf("%s", dest);
// 	return 0;
// }
