/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:05:00 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:05:05 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
        return (c);
    }
    else
        return (c);
}

/*int main(void)
{
    char c = 'a';
    printf("%c\n", ft_toupper(c));
}*/