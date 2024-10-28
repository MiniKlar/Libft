/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:57 by lomont            #+#    #+#             */
/*   Updated: 2024/10/28 18:14:44 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_dst;
	const char	*tmp_src;
	char		*tmp;

	if (!dest && !src)
		return (dest);
	i = 0;
	tmp_dst = (char *)dest;
	tmp_src = (char *)src;
	tmp = (char *)src;
	while (i++ < n)
	{
		tmp[i] = tmp_src[i];
		tmp_dst[i] = tmp[i];
	}
	return (dest);
}
/*int main(void)
{

	char    dest[100] = "SALUT00000000";
	char    src[100] = "BONJOUR";
	
	if (src != ft_memmove(src, dest, 8))
        write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
}*/