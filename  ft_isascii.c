/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:39 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:05:03 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c >= 127)
        return (0);
    else
        return (1);
}

/*int main(void)
{
    char c = '~';
    printf("%d\n", ft_isalnum(c));
}*/