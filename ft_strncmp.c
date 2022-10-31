/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:46:46 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/17 10:30:32 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *t1;
	unsigned char *t2;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while ((t1[i] || t2[i]) && i < n)
	{
		if (t1[i] > t2[i])
			return (t1[i] - t2[i]);
		else if (t1[i] < t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char	*s1 = "Iaa";
// 	char 	*s2 = "aÏa";
// 	size_t	size = 3;
// 	printf("Dyal System : %d\n", strncmp(s1, s2, size));
// 	printf("Diyalii     : %d\n", ft_strncmp(s1, s2, size));
// }