/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:35 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 11:57:16 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    
    i = 0;
    if (n == 0)
        return (NULL);
    while (i < n)
    {
        *(unsigned char *)s = (unsigned char) c;
        s++;
        i++;
    }
    return (s);
}
/*int main(void)
{
    char    buffer[100];
    
    ft_memset(buffer, '0', 100);
    printf("%s\n", buffer);
}*/