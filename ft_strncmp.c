/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:23:25 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/26 23:36:22 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_strncmp("salut", "salzt", 3));
	printf("%d\n", ft_strncmp("salut", "bonjour", 5));
	printf("%d\n", ft_strncmp("Hello", "sazut", 6));
	printf("%d\n", ft_strncmp("salut", "soi", 3));
}*/
