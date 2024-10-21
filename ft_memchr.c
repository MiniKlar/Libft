/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:56:16 by lomont            #+#    #+#             */
/*   Updated: 2024/10/21 15:24:08 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;

    while (i < n)
    {
        if ((const unsigned char)c == (*(const unsigned char *)s))
            return ((void *)s);
        i++;
    }
    return (NULL);
}
int main(void)
{
    char    str[100] = "Salut";
    printf("%p\n", ft_memchr(str, 'u', 4));
}