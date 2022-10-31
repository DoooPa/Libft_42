/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:48:53 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/30 18:16:29 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;

	i = 0;
	k = (unsigned char *)b;
	while (i < n)
		k[i++] = c;
	return (b);
}

int main()
{
	char *tab = malloc(sizeof(char));
	
	printf(".%d\n.\r",tab[0]);
	
	ft_memset(tab, 'a', 1000000);
	tab[999999] = 'b';
	
	printf("%c\n",tab[10000001]);
	printf("%c\n",tab[999998]);
	printf("%c\n",tab[999997]);
	printf("%c\n",tab[999996]);
	printf("%c\n",tab[999995]);
	printf("%c\n",tab[0]);
	printf("%c\n",tab[1]);
	printf("%c\n",tab[2]);
	printf("%c\n",tab[3]);
	return 0;
}
