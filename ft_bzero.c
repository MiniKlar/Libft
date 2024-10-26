/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:19:30 by lomont            #+#    #+#             */
/*   Updated: 2024/10/26 23:19:59 by lomont           ###   ########.fr       */
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
}
/*int main(void)
{
	char    buffer[100] = "Salut";
	ft_bzero(buffer, 3);
	printf("%s\n", buffer);
}*/