/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:48:53 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 23:26:34 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 23:  explicit | implicit 
void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*((unsigned char *)b + i++) = (unsigned char)c;
	return (b);
}

// 00000011 01000000 01001100 00101110
// int main()
// {
// 	void *ptr = malloc(4);
// 	// printf("%d", i);
// 	// *(short *)ptr = 5 << 8 | 57;

// 	ft_memset(ptr, 1 << 6, 1);

// 	printf("%d\n", *(short *)ptr);
// }

// int main()
// {
// 	int arr[] = {4,5,6,7,0};
// 	ft_memset(arr, 129, 5);
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }

// int main()
// {
// 	char *tab = malloc(sizeof(char));

// 	printf(".%d\n.\r",tab[0]);

// 	ft_memset(tab, 'a', 1000000);
// 	tab[999999] = 'b';

// 	printf("%c\n",tab[10000001]);
// 	printf("%c\n",tab[999998]);
// 	printf("%c\n",tab[999997]);
// 	printf("%c\n",tab[999996]);
// 	printf("%c\n",tab[999995]);
// 	printf("%c\n",tab[0]);
// 	printf("%c\n",tab[1]);
// 	printf("%c\n",tab[2]);
// 	printf("%c\n",tab[3]);
// 	int i;
// 	ft_memset(&i, 0, 4);
// 	ft_memset(&i, 0, 3);
// 	ft_memset(&i, 5, 2);
// 	ft_memset(&i, 57, 1);
// 	printf("%d\n", i);
// 	return 0;
// }
// 00000000 00000000
// 00000101 00111001