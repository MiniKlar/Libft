/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:50:14 by lomont            #+#    #+#             */
/*   Updated: 2024/11/05 00:39:07 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i - 1]))
		i--;
	return (ft_substr(s1, 0, i));
}
/*{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	char	*tmp;

	i = 0;
	j = ft_strlen(s1) - 1;
	l = 0;
	while (l == 0)
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] != set[k])
			{
				k++;
				l = 1;
			}
			else if (s1[i] == set[k])
			{
				l = 0;
				i++;
			}
		}
	}
	l = 0;
	while (l == 0)
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[j] != set[k])
			{
				k++;
				l = 1;
			}
			else if (s1[j] == set[k])
			{
				l = 0;
				j--;
			}
		}
	}
	printf("%ld\n",i);
	printf("%ld\n",j);
	tmp = malloc(sizeof(char) * ((j - i) + 1) + 1);
	if (!tmp)
		return (NULL);
	while (i <= j)
		tmp[k++] = s1[i++];
	tmp[k] = '\0';
	if (tmp[k] == '\0')
		printf("dernier caractere est 0\n ou %c: \n", tmp[k]);
	return (tmp);
}*/
// int	main(void)
// {
// 	char	*tmp;

// 	tmp = ft_strtrim("zzzbabzaaaFE!Nzzab", "zab");
// 	printf("%s\n", tmp);
// }