/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:14:03 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/26 23:34:11 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	//size_t srclen = strlen(src);
	//size_t dstlen = strlen(dst);
	size_t	i;
	size_t	j;

	i = 0;
	j = strlen(dst);
	//if (!dst && size == 0)
		//return (srclen);
	//if (size <= dstlen)
		//return (size + srclen);
	while (src[i] && strlen(dst) + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

/*int main(void)
{
	char    dst[100] = "tuvasbien?";
	char    src[20] = "Saluttoicestmoi";

	printf("%s\n", ft_strlcat(dst, src, 20));
}*/