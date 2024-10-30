/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:50:14 by lomont            #+#    #+#             */
/*   Updated: 2024/10/29 23:38:10 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	src_len;
	size_t	i;
	size_t	j;
	char	*tmp;

	i = 0;
	j = 0;
	src_len = ft_strlen(s1);
	tmp = malloc(sizeof(char) * src_len);
	if (!tmp)
		return (NULL);
	while (s1[i++] != '\0')
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
				i++;
				j = 0;
			}
			j++;
		}
	}		
	return (tmp);
}
/*int	main(void)
{
	char	*tmp;
	char	set[2] = "ab";
	char	str[33] = "abababaabbabaSaluttoiabababababa";

	tmp = ft_strtrim(str, set);
	printf("%s\n", tmp);
}*/