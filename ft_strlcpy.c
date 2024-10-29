/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:54 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/29 00:20:21 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t srclen = ft_strlen(src);

	if (size + 1 > srclen)
		ft_memcpy(dest, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (srclen);
}

/*int main(void)
{
	char    dest[100] = "bbbbbbbbbbbbbbbbbbbb";
	char    src[12] = "aaaaaaaaaaaa";

	printf("%zu\n", ft_strlcpy(dest, src, 12));
}*/