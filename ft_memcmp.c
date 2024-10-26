/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:25:31 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/26 23:28:59 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (s1 && s2 && n > 0)
	{
		if (s1 != s2)
		{
			if (s1 - s2 > 0)
				return (-1);
			else if (s1 - s2 < 0)
				return (1);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_memcmp("salut", "sazut", 5));
	printf("%d\n", ft_memcmp("salut", "bonjour", 5));
	printf("%d\n", ft_memcmp("Hello", "sazut", 6));
	printf("%d\n", ft_memcmp("Hello", "Hello", 6));
	printf("%d\n", ft_memcmp("salut", "toi", 0));
}*/