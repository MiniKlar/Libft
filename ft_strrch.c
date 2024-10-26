/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:45:20 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/26 23:39:12 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s)
		s++;
	while (s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
/*int main(void)
{
	printf("%s\n", strrchr("sazlutztoi", 'u'));
}*/