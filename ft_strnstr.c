/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:18:44 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/24 21:20:49 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int occur;
    char    *ptr;

    occur = 0;
    ptr = (char *)big;

    while (*big && len > 0)
    {
        while (*little)
        {
            if (little == big)
                little++;
            else
                break;
        big++;
        }
        len--;
    }
    if (little == NULL)
        return ((char *)ptr);
    else if (occur == 1)
        return (NULL);
    else
        return ((char *)big);
}

int main(void)
{
    printf("%s\n", ft_strnstr("salut", "sa", 2));
    printf("%s\n", ft_strnstr("saluttuvasbien", "ut", 4));
    printf("%s\n", ft_strnstr("Hello", "", 4));
}