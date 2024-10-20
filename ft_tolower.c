/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:58 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:05:06 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        c = c + 32;
        return (c);
    }
    else
        return (c);
}

/*int main(void)
{
    char c = 'Z';
    printf("%c\n", ft_tolower(c));
}*/