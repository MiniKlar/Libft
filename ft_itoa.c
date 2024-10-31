/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:25:10 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/31 20:48:13 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

int count_digit(int n)
{
	static int counter = 0;
	if (n != 0)
	{
		counter = counter + 1;
		//printf("%d\n", counter);
		return (count_digit (n / 10));
	}
	else
		return (counter);
}

char	*ft_itoa(int n)
{
	char 	*str;
	size_t	len_n;
	int		neg;

	neg = is_negative(n);
	if (n != 0)
	{
		len_n = count_digit(n) + neg;
		//printf("%d\n", count_digit(n));
	}
	else
		len_n = 1 + neg;
	str = malloc(sizeof(char) * (len_n + 1));
	if (!str)
	{
		printf("L'allocation a echoue");
		return (NULL);
	}
	if (neg == 1)
		n = n * -1;
	while (len_n-- > 0)
	{
		str[len_n] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	str[len_n] = '\0';
	return (str);
}
/*int	main(void)
{
	char *str;
	int n;

	n = -1000034;
	str = ft_itoa(n);
	printf("%s\n", str);
}*/
