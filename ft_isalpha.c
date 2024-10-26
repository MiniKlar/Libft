/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:43 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:04:43 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char *string)
{
	while (*string)
	{
		if ((*string >= 65 && *string <= 90)
			|| (*string >= 97 && *string <= 122))
			string++;
		else
			return (1);
	}
	return (0);
}

/*int main(void)
{
	char string[100] = "7Salut";
	printf("%d\n", ft_isalpha(string));
}*/