/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:22:54 by lomont            #+#    #+#             */
/*   Updated: 2024/10/29 01:49:09 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char 	*tmp;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}

/*int	main(void)
{
	char	*str;
	size_t	i;

	i = 0;
	str = calloc(5, sizeof(char));
	if (str == NULL) 
      printf("\nOut of memory!\n"); 
   else 
      printf("\nMemory allocated.\n");
	while (i < (5 * sizeof(char)))
	{
		str[i] = 'P';
		printf("%c\n", str[i]);
		i++;
	}
	printf("%s\n", str);
}*/