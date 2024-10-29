/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:14:03 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/28 23:21:36 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;
	
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (size == dstlen)
		return (srclen + dstlen);
	if (size > srclen + dstlen)
	{
		ft_memcpy(dst, src, srclen);
		printf("%s\n", dst);
	}
	else
	{
		ft_memcpy(dst, src, size);
		printf("%s\n", dst);
	}
	return (srclen + dstlen);
}

/*int main(void)
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char dest[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	printf("%ld\n", ft_strlcat(dest, src, max));
}*/