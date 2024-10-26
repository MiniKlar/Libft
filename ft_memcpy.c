/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:59:49 by lomont            #+#    #+#             */
/*   Updated: 2024/10/26 23:29:35 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char    dest[100] = "SALUT00000000";
	char    src[100] = "111111";
	
	ft_memcpy(dest, src, 10);
	printf("%s\n", dest);
}*/