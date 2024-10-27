/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:19:30 by lomont            #+#    #+#             */
/*   Updated: 2024/10/27 02:13:23 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)s = '0';
		s++;
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char    buffer[100] = "Salut";
	char    buffer1[100] = "Salut";
	char    buffer2[100] = "Salut";

	ft_bzero(buffer, 5);
	ft_bzero(buffer1, 3);
	ft_bzero(buffer2, 10);
	printf("%s\n%s\n%s\n", buffer, buffer1, buffer2);
}*/