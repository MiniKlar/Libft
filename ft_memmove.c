/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:57 by lomont            #+#    #+#             */
/*   Updated: 2024/10/27 05:33:25 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_dst;
	const char	*tmp_src;

	if (!dest && !src)
		return (dest);
	i = 0;
	tmp_dst = (char *)dest;
	tmp_src = (const char *)src;
	if (tmp_dst > tmp_src)
	{
		while (n > 0)
		{
			tmp_dst[n] = tmp_src[n];
			n--;
		}
	}
	else
	{
		while (++i < n)
		{
			tmp_dst[i] = tmp_src[i];
		}
	}
	return (dest);
}
/*int main(void)
{

	char    dest[100] = "SALUT00000000";
	char    src[100] = "BONJOUR";
	
	ft_memmove(dest, src, 4);
	printf("%s\n", dest);
}*/